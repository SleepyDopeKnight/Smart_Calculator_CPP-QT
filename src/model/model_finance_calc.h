#ifndef CPP3_SMARTCALC_MODEL_MODEL_FINANCE_CALC_H_
#define CPP3_SMARTCALC_MODEL_MODEL_FINANCE_CALC_H_

#include <cmath>
#include <iostream>

namespace s21 {
class Finance {
 public:
  struct credit {
    double sum_credit;
    int time_credit;
    double procent;
    int type;
    double sum_pay;
    double over_pay;
    double month_pay;
  };

  struct deposit {
    double sum_deposit;
    int time_deposit;
    double procent;
    double nalog;
    int type;
    int capital_procent;
    int day_deposit[100][2];
    int day_pay[100][2];
    double pay_procent;
    double sum_nalog;
    double last_deposit;
  };

  Finance() = default;
  ~Finance() = default;

  bool CreditCalc(credit *calc);
  double RoundRub(double x);

  void DepositNoCapital(deposit *calc);
  void DepositDailyCapital(deposit *calc);
  void DepositAnotherCapital(deposit *calc);
  bool CheckInput(deposit *calc);
  bool DepositCalc(deposit *calc);
  int Transactions(deposit *calc, char *string);
};
}  // namespace s21

#endif  // CPP3_SMARTCALC_MODEL_MODEL_FINANCE_CALC_H_
