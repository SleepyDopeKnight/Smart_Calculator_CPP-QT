#ifndef SMART_CALCULATOR_CPP_CONTROLLER_CONTROLLER_SMART_CALC_H_
#define SMART_CALCULATOR_CPP_CONTROLLER_CONTROLLER_SMART_CALC_H_

#include "../model/model_finance_calc.h"
#include "../model/model_smart_calc.h"
#include "../model/model_validation_calc.h"

namespace s21 {
class Controller {
 public:
  Controller();
  ~Controller();

  bool CheckErrors(char *string);
  double GetResult(char *string, double x);

  bool GetDeposit(s21::Finance::deposit *calc);
  bool GetCredit(s21::Finance::credit *calc);
  bool GetTransactions(s21::Finance::deposit *calc, char *string);

 private:
  Validation *validation_;
  Model *model_;
  Finance *valute_calc_;
};
}  // namespace s21

#endif  // SMART_CALCULATOR_CPP_CONTROLLER_CONTROLLER_SMART_CALC_H_
