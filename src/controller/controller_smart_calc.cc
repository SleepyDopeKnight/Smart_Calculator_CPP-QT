#include "controller_smart_calc.h"

s21::Controller::Controller() {
  validation_ = new s21::Validation;
  model_ = new s21::Model;
  valute_calc_ = new s21::Finance;
}

s21::Controller::~Controller() {
  delete validation_;
  delete model_;
  delete valute_calc_;
}

bool s21::Controller::CheckErrors(char *string) {
  return validation_->ValidationString(string);
}

double s21::Controller::GetResult(char *string, double x) {
  return model_->Terminal(string, x);
}

bool s21::Controller::GetCredit(s21::Finance::credit *calc) {
  return valute_calc_->CreditCalc(calc);
}

bool s21::Controller::GetDeposit(s21::Finance::deposit *calc) {
  return valute_calc_->DepositCalc(calc);
}

bool s21::Controller::GetTransactions(s21::Finance::deposit *calc,
                                      char *string) {
  return valute_calc_->Transactions(calc, string);
}
