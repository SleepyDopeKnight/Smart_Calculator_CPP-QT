#ifndef SMART_CALCULATOR_CPP_MODEL_MODEL_SMART_CALC_H_
#define SMART_CALCULATOR_CPP_MODEL_MODEL_SMART_CALC_H_

#include <cmath>
#include <cstring>
#include <iostream>
#include <stack>

namespace s21 {
class Model {
 public:
  struct lexeme {
    double value;
    int priority;
    // X и Число = 0, +- = 1, */mod = 2, ^ = 3, scatl = 4, () = -1;
    int type;
    // number - 1;
    // x - 2;
    // plus - 3;
    // minus - 4;
    // * - 5;
    // / - 6;
    // mod - 7;
    // ^ - 8;
    // ( - 9;
    // ) - 10;
    // sin - 11;
    // cos - 12;
    // tan - 13;
    // asin - 14;
    // acos - 15;
    // atan - 16;
    // sqrt - 17;
    // ln - 18
    // log - 19;
  };

  // Constructors
  Model() = default;
  ~Model() = default;

  // Validation
  bool ValidInput(char *string);
  bool ValidFunction(char *string);
  bool CheckFunctionPlacement(char *string);
  bool CheckBracketPlacement(char *string);
  bool CheckOperatorsPlacement(char *string);
  bool ValidationString(char *string);
  std::stack<s21::Model::lexeme> PusherInStack(char *string, double x);

  // ReversePolishNotation & Calculate
  std::stack<s21::Model::lexeme> ReversePolishNotation(
      std::stack<lexeme> ready);
  double Calculate(std::stack<lexeme> sorted);
  void ReverseStack(std::stack<lexeme> &not_reversed);
  double Terminal(char *string, double x);
};
}  // namespace s21

#endif  // SMART_CALCULATOR_CPP_MODEL_MODEL_SMART_CALC_H_
