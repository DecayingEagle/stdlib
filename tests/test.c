#include "test.h"

int test_print() {
  char *str = "Hello, World!\n";
  size_t len = 0;
  len = strlen(str);
  return print(str, len);
}

void exit(int status) {
  asm("mov $0x3C, %%rax\n"
      "mov %0, %%rdi\n"
      "syscall\n"
      :
      : "r"((long)status)
      : "%rax", "%rdi");
}

// void _start() {
//   int ret = test_print();
//   exit(ret);
// }

int main() {
  return test_print();
}