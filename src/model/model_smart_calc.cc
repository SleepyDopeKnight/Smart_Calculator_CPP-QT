#include "model_smart_calc.h"

// Validation
bool s21::Model::ValidInput(char *string) {
  char allow_symbols[33] = {'0', '1', '2', '3', '4', '5', '6', '7',
                            '9', 'x', 'a', 'c', 'o', 's', 'i', 'n',
                            't', 'q', 'r', 'l', 'g', 'm', '+', '-',
                            '/', '*', '^', '(', ')', '.', '8', 'd'};
  bool result = true;
  while (*string != '\0') {
    if (strlen(string) > 255) {
      result = false;
      break;
    }
    int count = 0;
    for (size_t i = 0; i < strlen(allow_symbols); ++i) {
      if (*string == allow_symbols[i]) {
        result = true;
        count += 1;
        continue;
      }
    }
    if (*string == 'c' || *string == 'a' || *string == 's' || *string == 'l' ||
        *string == 't' || *string == 'm') {
      if (ValidFunction(string)) {
        count += 1;
        if (*string == 't') string += 2;
        if (*string == 's') string += 1;
        if (*string == 'q') string += 2;
        if (*string == 'c') string += 3;
        if (*string == 'a') string += 3;
      } else {
        count = 0;
      }
    }
    if (count == 0) {
      result = false;
      break;
    }
    ++string;
  }
  return result;
}

bool s21::Model::ValidFunction(char *string) {
  bool result = true;
  if (strncmp(string, "acos(", 5) == 0) {
    result = true;
  } else if (strncmp(string, "asin(", 5) == 0) {
    result = true;
  } else if (strncmp(string, "atan(", 5) == 0) {
    result = true;
  } else if (strncmp(string, "log(", 4) == 0) {
    result = true;
  } else if (strncmp(string, "sin(", 4) == 0) {
    result = true;
  } else if (strncmp(string, "cos(", 4) == 0) {
    result = true;
  } else if (strncmp(string, "tan(", 4) == 0) {
    result = true;
  } else if (strncmp(string, "ln(", 3) == 0) {
    result = true;
  } else if (strncmp(string, "sqrt(", 5) == 0) {
    result = true;
  } else if (strncmp(string, "mod", 3) == 0) {
    result = true;
  } else {
    result = false;
  }
  return result;
}

bool s21::Model::CheckFunctionPlacement(char *string) {
  bool result = true;
  char previous_char = '\0';
  char preprevious_char = '\0';
  while (*string != '\0') {
    if (*string == 'c' || *string == 's' || *string == 'l' || *string == 't') {
      --string;
      if (*string == 'a') --string;
      if (*string == 'o') string -= 2;
      if (*string == 'a') --string;
      if (*string == 'r') string -= 3;
      if ((*string == '+' || *string == '-' || *string == '*' ||
           *string == '/' || *string == '(' || *string == ')' ||
           *string == '^' || previous_char == '\0' ||
           preprevious_char == '\0')) {
        ++string;
        if (*string == 'a') string += 4;
        if (*string == 'c') string += 3;
        if (*string == 't') string += 3;
        if (*string == 's') string += 2;
        if (*string == 'r') string += 2;
        if (*string == 'l') string += 2;
      } else {
        result = false;
        break;
      }
    }
    preprevious_char = previous_char;
    previous_char = *string;
    ++string;
  }
  return result;
}

bool s21::Model::CheckBracketPlacement(char *string) {
  bool result = true;
  int left_bracket = 0;
  int right_bracket = 0;
  char previous_char = '\0';
  while (*string != '\0') {
    if (*string == '(') left_bracket += 1;
    if (*string == ')') right_bracket += 1;
    if (right_bracket > left_bracket) result = false;
    if (*string == ')' && previous_char == '(') result = false;
    if ((*string == '(' && (previous_char == ')' ||
                            (previous_char >= '0' && previous_char <= '9'))))
      result = false;
    previous_char = *string;
    ++string;
  }
  if (left_bracket != right_bracket) result = false;
  return result;
}

bool s21::Model::CheckOperatorsPlacement(char *string) {
  bool result = true;
  char previous_char = '\0';
  while (*string != '\0') {
    if ((*string == '+' || *string == '-' || *string == '*' || *string == '/' ||
         *string == '^') &&
        (previous_char == '+' || previous_char == '-' || previous_char == '*' ||
         previous_char == '/' || previous_char == '^'))
      result = false;
    if (*string == 'x' && (previous_char == 'x' ||
                           (previous_char >= '0' && previous_char <= '9')))
      result = false;
    if ((*string >= '0' && *string <= '9') && previous_char == 'x')
      result = false;
    if ((*string == ')' || *string == '*' || *string == '/' ||
         *string == '^') &&
        (previous_char == '(' || previous_char == '\0'))
      result = false;
    if (*string == '.' || *string == 'm') {
      --string;
      if (*string >= '0' && *string <= '9') {
        string += 2;
        if (*string == 'o') string += 2;
        if (*string >= '0' && *string <= '9') {
          --string;
        } else {
          result = false;
        }
      } else {
        result = false;
        break;
      }
    }
    previous_char = *string;
    ++string;
  }
  if (*string == '\0' && (previous_char == '+' || previous_char == '-' ||
                          previous_char == '*' || previous_char == '/'))
    result = false;
  return result;
}

bool s21::Model::ValidationString(char *string) {
  return (ValidInput(string) && CheckFunctionPlacement(string) &&
          CheckBracketPlacement(string) && CheckOperatorsPlacement(string));
}

std::stack<s21::Model::lexeme> s21::Model::PusherInStack(char *string,
                                                         double x) {
  std::stack<lexeme> pushed;
  if (ValidationString(string)) {
    while (*string != '\0') {
      if ((*string >= '0' && *string <= '9') || *string == '.') {
        pushed.push({atof(string), 0, 1});
        while ((*string >= '0' && *string <= '9') || *string == '.') ++string;
      }
      if (*string == '-') {
        --string;
        if (*string == '(') pushed.push({0, 0, 1});
        ++string;
        if (pushed.empty()) pushed.push({0, 0, 1});
        pushed.push({0, 1, 4});
      } else if (*string == '+') {
        --string;
        if (*string == '(') pushed.push({0, 0, 1});
        ++string;
        if (pushed.empty()) pushed.push({0, 0, 1});
        pushed.push({0, 1, 3});
      } else if (*string == 'x') {
        pushed.push({x, 0, 2});
      } else if (*string == '*') {
        pushed.push({0, 2, 5});
      } else if (*string == '/') {
        pushed.push({0, 2, 6});
      } else if (*string == 'm') {
        pushed.push({0, 2, 7});
      } else if (*string == '^') {
        pushed.push({0, 3, 8});
      } else if (*string == '(') {
        pushed.push({0, -1, 9});
      } else if (*string == ')') {
        pushed.push({0, -1, 10});
      } else if (*string == 'c') {
        pushed.push({0, 4, 12});
        pushed.push({0, -1, 9});
      } else if (*string == 't') {
        pushed.push({0, 4, 13});
      } else if (*string == 'a' || *string == 's') {
        ++string;
        if (*string == 'i') pushed.push({0, 4, 11});
        if (*string == 's') pushed.push({0, 4, 14});
        if (*string == 'c') {
          pushed.push({0, 4, 15});
          pushed.push({0, -1, 9});
        }
        if (*string == 't') pushed.push({0, 4, 16});
        if (*string == 'q') {
          pushed.push({0, 4, 17});
          string += 2;
        }
      } else if (*string == 'l') {
        ++string;
        if (*string == 'n') pushed.push({0, 4, 18});
        if (*string == 'o') pushed.push({0, 4, 19});
      }
      ++string;
    }
  }
  return pushed;
}

// ReversePolishNotation & Calculate
std::stack<s21::Model::lexeme> s21::Model::ReversePolishNotation(
    std::stack<lexeme> pushed) {
  std::stack<lexeme> support;
  std::stack<lexeme> ready;
  double current_value = 0;
  int current_priority = 0;
  int current_type = 0;
  double buf_value = 0;
  int buf_priority = 0;
  int buf_type = 0;
  while (!pushed.empty()) {
    s21::Model::lexeme pushed_top = pushed.top();
    current_value = pushed_top.value;
    current_priority = pushed_top.priority;
    current_type = pushed_top.type;
    pushed.pop();
    if (current_priority == 0)
      ready.push({current_value, current_priority, current_type});
    if (current_priority > 0 && current_priority < 5) {
      buf_value = current_value;
      buf_priority = current_priority;
      buf_type = current_type;
      while (!support.empty() && support.top().priority >= current_priority) {
        s21::Model::lexeme elem = support.top();
        support.pop();
        ready.push({elem.value, elem.priority, elem.type});
      }
      support.push({buf_value, buf_priority, buf_type});
    }
    if (current_priority == -1) {
      if (current_type == 9)
        support.push({current_value, current_priority, current_type});
      if (current_type == 10) {
        while (!support.empty()) {
          s21::Model::lexeme buf_elem = support.top();
          support.pop();
          if (buf_elem.type != 9)
            ready.push({buf_elem.value, buf_elem.priority, buf_elem.type});
          else
            break;
        }
      }
    }
  }
  while (!support.empty()) {
    s21::Model::lexeme buf_elem = support.top();
    support.pop();
    ready.push({buf_elem.value, buf_elem.priority, buf_elem.type});
  }
  return ready;
}

double s21::Model::Calculate(std::stack<lexeme> sorted) {
  double result = 0;
  std::stack<lexeme> ready;
  double current_value = 0;
  int current_priority = 0;
  int current_type = 0;
  while (!sorted.empty()) {
    s21::Model::lexeme sorted_top = sorted.top();
    current_value = sorted_top.value;
    current_priority = sorted_top.priority;
    current_type = sorted_top.type;
    sorted.pop();
    if (current_priority == 0)
      ready.push({current_value, current_priority, current_type});
    if (!sorted.empty() && sorted.top().type >= 3 && sorted.top().type <= 8) {
      double first_lexeme, second_lexeme;
      second_lexeme = ready.top().value;
      ready.pop();
      first_lexeme = ready.top().value;
      ready.pop();
      if (sorted.top().type == 3) result = first_lexeme + second_lexeme;
      if (sorted.top().type == 4) result = first_lexeme - second_lexeme;
      if (sorted.top().type == 5) result = first_lexeme * second_lexeme;
      if (sorted.top().type == 6) result = first_lexeme / second_lexeme;
      if (sorted.top().type == 7) result = fmod(first_lexeme, second_lexeme);
      if (sorted.top().type == 8) result = pow(first_lexeme, second_lexeme);
      ready.push({result, 0, 1});
    }
    if (!sorted.empty() && sorted.top().type > 10) {
      double lexeme;
      lexeme = ready.top().value;
      ready.pop();
      if (sorted.top().type == 11) result = sin(lexeme);
      if (sorted.top().type == 12) result = cos(lexeme);
      if (sorted.top().type == 13) result = tan(lexeme);
      if (sorted.top().type == 14) result = asin(lexeme);
      if (sorted.top().type == 15) result = acos(lexeme);
      if (sorted.top().type == 16) result = atan(lexeme);
      if (sorted.top().type == 17) result = sqrt(lexeme);
      if (sorted.top().type == 18) result = log(lexeme);
      if (sorted.top().type == 19) result = log10(lexeme);
      ready.push({result, 0, 1});
    }
  }
  double equality = 0;
  if (!ready.empty()) {
    equality = ready.top().value;
    ready.pop();
  }
  return equality;
}

void s21::Model::ReverseStack(std::stack<lexeme> &not_reversed) {
  std::stack<lexeme> reversed;
  while (!not_reversed.empty()) {
    reversed.push(not_reversed.top());
    not_reversed.pop();
  }
  not_reversed = std::move(reversed);
}

double s21::Model::Terminal(char *string, double x) {
  s21::Model model;
  std::stack<s21::Model::lexeme> pushed = model.PusherInStack(string, x);
  model.ReverseStack(pushed);
  std::stack<s21::Model::lexeme> sorted = model.ReversePolishNotation(pushed);
  model.ReverseStack(sorted);
  double result = model.Calculate(sorted);
  return result;
}
