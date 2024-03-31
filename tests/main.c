#include "test_print.c"
#include "test_mem.c"



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
      return test_print() + test_mem();
    case 0:
      return test_print();
    case 1:
      return test_mem();
    default:
      return -1;
  }

}

int main(int argc, char** argv) {
  if (argc == 1) {
    return tests(-1);
  } else {
    //this will only work after i implement the atoi function
    //return tests(atoi(argv[1]));

    //temp
    return tests(0);
  }
}