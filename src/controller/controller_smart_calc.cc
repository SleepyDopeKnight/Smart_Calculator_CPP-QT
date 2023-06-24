#include "controller_smart_calc.h"

bool s21::Controller::CheckErrors(char *string) {
  return model.ValidationString(string);
}

double s21::Controller::GetResult(char *string, double x) {
  return model.Terminal(string, x);;
}

bool s21::Controller::GetCredit(s21::Finance::credit *calc) {
  return valute_calc.CreditCalc(calc);
}

bool s21::Controller::GetDeposit(s21::Finance::deposit *calc) {
  return valute_calc.DepositCalc(calc);
}

bool s21::Controller::GetTransactions(s21::Finance::deposit *calc,
                                      char *string) {
  return valute_calc.Transactions(calc, string);
}
