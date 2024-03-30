#include "test_print.c"
#include "test_itoa.c"



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
    case 0:
      return test_print();
    case 1:
      return test_itoa();
    default:
      return -1;
  }

}

int main() {
  return tests(1);
}