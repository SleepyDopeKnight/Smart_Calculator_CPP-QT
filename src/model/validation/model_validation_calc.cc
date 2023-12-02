#include "model_validation_calc.h"

// Validation
bool s21::Validation::ValidInput(char *string) {
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

bool s21::Validation::ValidFunction(char *string) {
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

bool s21::Validation::CheckFunctionPlacement(char *string) {
  bool result = true;
  char previous_char = '\0';
  char preprevious_char = '\0';
  while (*string != '\0') {
    if ((*string == 'c' || *string == 's' || *string == 'l' ||
         *string == 't') &&
        previous_char != '\0' && preprevious_char != '\0') {
      --string;
      if (*string == 'a') --string;
      if (*string == 'o') string -= 2;
      if (*string == 'a') --string;
      if (*string == 'r') string -= 3;
      if ((*string == '+' || *string == '-' || *string == '*' ||
           *string == '/' || *string == '(' || *string == ')' ||
           *string == '^')) {
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

bool s21::Validation::CheckBracketPlacement(char *string) {
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

bool s21::Validation::CheckOperatorsPlacement(char *string) {
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

bool s21::Validation::ValidationString(char *string) {
  return (ValidInput(string) && CheckFunctionPlacement(string) &&
          CheckBracketPlacement(string) && CheckOperatorsPlacement(string));
}
