#include "test_print.c"
#include "test_mem.c"
#include "test_atox.c"
#include "atoi.h"



//! Deprecated? There were issues with gcc not recognizing main as the entry point
// void exit(int status) {
  // asm("mov $0x3C, %%rax\n"
      // "mov %0, %%rdi\n"
      // "syscall\n"
      // :
      // : "r"((long)status)
      // : "%rax", "%rdi");
// }
// 
// 
// void _start() {
//   int ret = test_print();
//   exit(ret);
// }

int tests(int id){
  switch(id){
    case -1:
      return test_print() + test_mem() + test_atof() + test_atoi() + test_atol();
    case 0:
      return test_print();
    case 1:
      return test_mem();
    case 2:
      return test_atof() + test_atoi() + test_atol();
    default:
      return -1;
  }

}

int main(int argc, char** argv) {
  if (argc == 1) {
    return tests(-1);
  } else {
    return tests(atoi(argv[1]));
  }
}