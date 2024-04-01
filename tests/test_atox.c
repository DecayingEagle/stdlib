#include "atoi.h"
#include "atof.h"
#include "atol.h"
#include "print.h"

int test_atol() {
  long result1 = atol("12345");
  if (result1 != 12345) {
    print("atol test 1 failed\n", 19);
  } else {
    print("atol test 1 passed\n", 19);
  }

  long result2 = atol("-12345");
  if (result2 != -12345) {
    print("atol test 2 failed\n", 19);
  } else {
    print("atol test 2 passed\n", 19);
  }

  long result3 = atol("0");
  if (result3 != 0) {
    print("atol test 3 failed\n", 19);
  } else {
    print("atol test 3 passed\n", 19);
  }
  // Add more test cases as needed
  return 0;
}

int test_atoi() {
  int result1 = atoi("12345");
  if (result1 != 12345) {
    print("atoi test 1 failed\n", 19);
  } else {
    print("atoi test 1 passed\n", 19);
  }

  int result2 = atoi("-12345");
  if (result2 != -12345) {
    print("atoi test 2 failed\n", 19);
  } else {
    print("atoi test 2 passed\n", 19);
  }

  int result3 = atoi("0");
  if (result3 != 0) {
    print("atoi test 3 failed\n", 19);
  } else {
    print("atoi test 3 passed\n", 19);
  }
  // Add more test cases as needed
  return 0;
}

int test_atof() {
  double result1 = atof("123.45");
  if (result1 != 123.45) {
    print("atof test 1 failed\n", 19);
  } else {
    print("atof test 1 passed\n", 19);
  }

  double result2 = atof("-123.45");
  if (result2 != -123.45) {
    print("atof test 2 failed\n", 19);
  } else {
    print("atof test 2 passed\n", 19);
  }

  double result3 = atof("0.0");
  if (result3 != 0.0) {
    print("atof test 3 failed\n", 19);
  } else {
    print("atof test 3 passed\n", 19);
  }
  return 0;
  // Add more test cases as needed
}