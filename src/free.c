#include "free.h"

//int munmap(void addr[.length], size_t length);

int free(void* ptr){
  size_t len = sizeof(ptr);
  long ret_val = 0;
  asm("mov $0x0b, %%rax\n"
      "mov %1, %%rdi\n"
      "mov %2, %%rsi\n"
      "syscall\n"
      "mov %%rax, %0\n"
      : "=r"(ret_val)
      : "r"((long)ptr), "r"((long)len)
      : "%rax", "%rdi", "%rsi");
  return (int)ret_val;
}