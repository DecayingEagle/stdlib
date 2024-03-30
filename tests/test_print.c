#include "test_print.h"

int test_print() {
  char *str = "Hello, World!\n";
  size_t len = 0;
  len = strlen(str);
  return print(str, len);
}