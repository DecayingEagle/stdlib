#include "print.h"

int print(const char* buffer, size_t len) {
  long ret_val = 0;
  asm("mov $0x1, %%rax\n"
      "mov $0x1, %%rdi\n" //STDOUT_FILENO
      "mov %1, %%rsi\n"
      "mov %2, %%rdx\n"
      "syscall\n"
      "mov %%rax, %0\n"
      : "=r"(ret_val)
      : "r"((long)buffer), "r"((long)len)
      : "%rax", "%rdi", "%rsi", "%rdx");
  return (int)ret_val;
}