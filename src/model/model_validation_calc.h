#ifndef SMART_CALCULATOR_CPP_MODEL_MODEL_VALIDATION_H_
#define SMART_CALCULATOR_CPP_MODEL_MODEL_VALIDATION_H_

#include <iostream>

namespace s21 {
class Validation {
 public:
  // Validation
  bool ValidInput(char *string);
  bool ValidFunction(char *string);
  bool CheckFunctionPlacement(char *string);
  bool CheckBracketPlacement(char *string);
  bool CheckOperatorsPlacement(char *string);
  bool ValidationString(char *string);

 private:
  // char *string = nullptr;
};
}  // namespace s21

#endif  // SMART_CALCULATOR_CPP_MODEL_MODEL_VALIDATION_H_
