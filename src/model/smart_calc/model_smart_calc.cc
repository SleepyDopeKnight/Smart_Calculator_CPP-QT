#include "model_smart_calc.h"

// ReversePolishNotation & Calculate
std::stack<s21::Model::lexeme> s21::Model::PusherInStack(char *string,
                                                         double x) {
  std::stack<lexeme> pushed;
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
  return pushed;
}

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