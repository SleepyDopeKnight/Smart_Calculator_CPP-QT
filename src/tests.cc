#include <gtest/gtest.h>

#include "./model/model_smart_calc.h"

s21::Model model;

TEST(test1, 1) {
  char string[255] = ("3+4*2/(1-5)^2");
  double result = model.Terminal(string, 0);
  EXPECT_EQ(result, 3.5);
}

TEST(test2, 2) {
  char string[255] = ("3+4*2");
  double result = model.Terminal(string, 0);
  EXPECT_EQ(result, 11);
}

TEST(test3, 3) {
  char string[255] = ("(132+sin(asin(sqrt(ln(log(228.11)))))/122)");
  double result = model.Terminal(string, 0);
  ASSERT_FLOAT_EQ(result, 132.0076);
}

TEST(test4, 4) {
  double x = 2;
  char string[255] = ("4*((-3+2)*2)");
  double result = model.Terminal(string, x);
  EXPECT_EQ(result, -8);
}

TEST(test5, 5) {
  char string[255] = ("2^2^3");
  double result = model.Terminal(string, 0);
  EXPECT_EQ(result, 64);
}

TEST(motest6, 6) {
  char string[255] = ("5mod3");
  double result = model.Terminal(string, 0);
  EXPECT_EQ(result, 2);
}

TEST(test7, 7) {
  char string[255] = ("(132+sin(asin(sqrt(ln(log(228.11)))))-4*5^6*(123))");
  double result = model.Terminal(string, 0);
  ASSERT_FLOAT_EQ(result, -7687367.073);
}

TEST(test8, 8) {
  char string[255] = ("sin(2)");
  double result = model.Terminal(string, 0);
  ASSERT_FLOAT_EQ(result, 0.90929741);
}

TEST(test9, 9) {
  char string[255] = ("(-3)^2");
  double result = model.Terminal(string, 0);
  EXPECT_EQ(result, 9);
}

TEST(test10, 10) {
  char string[255] = ("3+4*2/(1-5)^2");
  double result = model.Terminal(string, 0);
  EXPECT_EQ(result, 3.5);
}

TEST(test11, 11) {
  char string[255] = ("6^5-14*2");
  double result = model.Terminal(string, 0);
  EXPECT_EQ(result, 7748);
}

TEST(test12, 12) {
  char string[255] = ("3+4*2/(1-5)^2");
  double result = model.Terminal(string, 0);
  EXPECT_EQ(result, 3.5);
}

TEST(test13, 13) {
  char string[255] =
      ("(15/(7-(1+1))*3-(2+(1+1-1+1*2/2))+15/(7-(1+1))*3-(2+(1+1+1-1*2/2)))");
  double result = model.Terminal(string, 0);
  EXPECT_EQ(result, 10);
}

TEST(test14, 14) {
  char string[255] = ("(8+2*5)/(1+3*2-4)");
  double result = model.Terminal(string, 0);
  EXPECT_EQ(result, 6);
}

TEST(test15, 15) {
  char string[255] = ("1+2+3+4*5*6^7");
  double result = model.Terminal(string, 0);
  EXPECT_EQ(result, 5598726);
}

TEST(test16, 16) {
  char string[255] = ("3-(-3)");
  double result = model.Terminal(string, 0);
  EXPECT_EQ(result, 6);
}

TEST(test17, 17) {
  char string[255] = ("15+75*1/3-42+3^3");
  double result = model.Terminal(string, 0);
  EXPECT_EQ(result, 25);
}

TEST(test18, 18) {
  char string[255] = ("qwerty");
  double result = model.Terminal(string, 0);
  EXPECT_EQ(result, 0);
}

TEST(test19, 19) {
  char string[300] =
      ("11113123124314124412412411113123124314124412412411113123124314124412412"
       "41111312312431412441241241111312312431412441241241111312312431412441241"
       "24111131231243141244124124111131231243141244124124111131231243141244124"
       "12411113123124314124412412411113123124314124412412411113123124314124412"
       "4124");
  double result = model.Terminal(string, 2);
  EXPECT_EQ(result, 0);
}

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
