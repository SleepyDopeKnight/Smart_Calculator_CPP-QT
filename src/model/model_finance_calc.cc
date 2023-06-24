#include "model_finance_calc.h"

bool s21::Finance::CreditCalc(credit *calc) {
  bool result = true;
  if (calc->procent <= 0 || calc->time_credit <= 0 || calc->sum_credit <= 0) {
    result = false;
  } else {
    if (calc->type == 1) {
      double proc_mes = ((double)calc->procent / 100) / 12;
      double per = (1. + pow((1. + proc_mes), (double)calc->time_credit)) - 1;
      calc->month_pay =
          RoundRub(calc->sum_credit * ((proc_mes * per) / (per - 1)));
      calc->over_pay =
          RoundRub((calc->month_pay * calc->time_credit) - calc->sum_credit);
      calc->sum_pay = RoundRub(calc->month_pay * calc->time_credit);
    } else if (calc->type == 2) {
      double OD = calc->sum_credit / calc->time_credit;
      for (int i = 0; i < calc->time_credit; i++) {
        calc->sum_pay += RoundRub(
            OD +
            ((calc->sum_credit - OD * i) * (double)calc->procent / 100) / 12);
      }
      calc->over_pay = RoundRub(calc->sum_pay - calc->sum_credit);
      calc->month_pay = RoundRub(calc->sum_pay / calc->time_credit);
    } else {
      result = false;
    }
  }
  return result;
}

double s21::Finance::RoundRub(double x) {
  for (int i = 0; i < 3; i++) {
    x *= 10;
  }
  double res_x = x;
  while (res_x > 0) {
    res_x /= 10;
  }
  x /= 10;
  x = round(x);
  for (int i = 0; i < 2; i++) {
    x /= 10;
  }
  return x;
}

void s21::Finance::DepositNoCapital(deposit *calc) {
  double bet = calc->procent / 100;
  int count = 0;
  while (count != calc->time_deposit) {
    for (int i = 0; calc->day_deposit[i][0] != 0; i++) {
      if ((calc->day_deposit[i][0]) == count) {
        calc->sum_deposit += RoundRub(calc->day_deposit[i][1]);
      }
    }
    for (int i = 0; calc->day_pay[i][0] != 0; i++) {
      if ((calc->day_pay[i][0]) == count) {
        calc->sum_deposit -= RoundRub(calc->day_pay[i][1]);
      }
    }
    calc->pay_procent +=
        RoundRub((((calc->sum_deposit * bet * calc->time_deposit) / 365) /
                  calc->time_deposit));
    count++;
  }
  calc->pay_procent = RoundRub(calc->pay_procent);
  calc->sum_nalog = RoundRub(calc->pay_procent * (calc->nalog / 100));
  calc->last_deposit = RoundRub(calc->sum_deposit + calc->pay_procent);
}

void s21::Finance::DepositDailyCapital(deposit *calc) {
  double bet = calc->procent / 100;
  int count = 0;
  while (count != calc->time_deposit) {
    for (int i = 0; calc->day_deposit[i][0] != 0; i++) {
      if ((calc->day_deposit[i][0]) == count) {
        calc->sum_deposit += RoundRub(calc->day_deposit[i][1]);
      }
    }
    for (int i = 0; calc->day_pay[i][0] != 0; i++) {
      if ((calc->day_pay[i][0]) == count) {
        calc->sum_deposit -= RoundRub(calc->day_pay[i][1]);
      }
    }
    calc->pay_procent +=
        RoundRub(((calc->sum_deposit * bet * calc->time_deposit) / 365) /
                 calc->time_deposit);
    calc->sum_deposit +=
        RoundRub(((calc->sum_deposit * bet * calc->time_deposit) / 365) /
                 calc->time_deposit);
    count++;
  }
  calc->pay_procent = RoundRub(calc->pay_procent);
  calc->sum_nalog = RoundRub(calc->pay_procent * (calc->nalog / 100));
  calc->last_deposit = RoundRub(calc->sum_deposit);
}

void s21::Finance::DepositAnotherCapital(deposit *calc) {
  double bet = calc->procent / 100;
  int count = 0;
  double rez_procent = 0;
  int days = 0;
  if (calc->type == 2) {
    days = 31;
  } else if (calc->type == 3) {
    days = 91;
  } else if (calc->type == 4) {
    days = 183;
  } else if (calc->type == 5) {
    days = 364;
  }
  while (count != calc->time_deposit) {
    if (count % days == 0 && count != 0) {
      calc->sum_deposit += RoundRub(calc->pay_procent);
      rez_procent += RoundRub(calc->pay_procent);
      calc->pay_procent = 0;
    }
    for (int i = 0; calc->day_deposit[i][0]; i++) {
      if ((calc->day_deposit[i][0]) == count) {
        calc->sum_deposit += RoundRub(calc->day_deposit[i][1]);
      }
    }
    for (int i = 0; calc->day_pay[i][0]; i++) {
      if ((calc->day_pay[i][0]) == count) {
        calc->sum_deposit -= RoundRub(calc->day_pay[i][1]);
      }
    }
    calc->pay_procent +=
        (((calc->sum_deposit * bet * calc->time_deposit) / 365) /
         calc->time_deposit);
    count++;
  }
  calc->pay_procent = RoundRub(calc->pay_procent) + rez_procent;
  calc->sum_nalog = RoundRub(calc->pay_procent * (calc->nalog / 100));
  calc->last_deposit = RoundRub(calc->sum_deposit + calc->pay_procent);
}

bool s21::Finance::CheckInput(deposit *calc) {
  bool result = true;
  if (calc->capital_procent < 0 || calc->capital_procent > 1) result = false;
  if (calc->sum_deposit <= 0 || calc->time_deposit <= 0 || calc->nalog < 0 ||
      calc->procent <= 0)
    result = false;
  if (calc->capital_procent == 1) {
    if (calc->type <= 0 || calc->type > 5) result = true;
  }
  return result;
}

bool s21::Finance::DepositCalc(deposit *calc) {
  bool result = CheckInput(calc);
  if (result) {
    if (calc->capital_procent == 0) {
      DepositNoCapital(calc);
    } else {
      if (calc->type == 1) {
        DepositDailyCapital(calc);
      } else {
        DepositAnotherCapital(calc);
      }
    }
  }
  return result;
}

int s21::Finance::Transactions(deposit *calc, char *string) {
  int i = 0;
  int j = 0;
  int type_trans = 0;
  char num[10000] = {0};
  int check = 0;
  int lenght = 0;
  while (*string != '\0') {
    if (*string == 'p' && *(string + 1) == 'a') {
      type_trans = 1;
    } else if (*string == 'd' && *(string + 1) == 'e') {
      type_trans = 2;
    }
    if (strchr("0123456789", *string)) {
      char *dest = string;
      while (strchr("0123456789", *string)) {
        string++;
        lenght++;
      }
      strncpy(num, dest, lenght);
      if (type_trans == 1) {
        if (check == 0) {
          check = 1;
          sscanf(num, "%d", &calc->day_pay[i][0]);
        } else {
          check = 0;
          sscanf(num, "%d", &calc->day_pay[i][1]);
          i++;
        }
      } else {
        if (check == 0) {
          check = 1;
          sscanf(num, "%d", &calc->day_deposit[j][0]);
        } else {
          check = 0;
          sscanf(num, "%d", &calc->day_deposit[j][1]);
          j++;
        }
      }
    }
    string++;
  }
  return 0;
}
