#include "malloc.h"

//void *mmap(void addr[.length], size_t length, int prot, int flags,int fd, off_t offset);
//addr: %rdi
//length: %rsi
//prot: %rdx
//flags: %r10
//fd: %r8
//offset: %r9
//return value: %rax

void* malloc(const size_t size){
  void* ptr;
  asm("mov $0x09, %%rax\n"
      "mov $0x0, %%rdi\n"
      "mov %1, %%rsi\n"
      "mov $0x03, %%rdx\n"
      "mov $0x21, %%r10\n"
      "mov $-1, %%r8\n"
      "mov $0x0, %%r9\n"
      "syscall\n"
      "mov %%rax, %0\n"
      : "=r"(ptr)
      : "r"((long)size)
      : "%rax", "%rdi", "%rsi", "%rdx", "%r10", "%r8", "%r9");
  return ptr;
}