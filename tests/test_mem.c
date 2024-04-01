#include "malloc.h"
#include "free.h"
#include "print.h"
#include "strlen.h"
#include "types.h"

int test_mem() {
  // Test case 1: Allocate and free a small block of memory
  void* ptr1 = malloc(10);
  if (ptr1 == NULL) {
    print("Test case 1 failed: malloc returned NULL\n", strlen("Test case 1 failed: malloc returned NULL\n"));
  } else {
    free(ptr1);
    print("Test case 1 passed\n", strlen("Test case 1 passed\n"));
  }

  // Test case 2: Allocate and free a large block of memory
  void* ptr2 = malloc(1000000);
  if (ptr2 == NULL) {
    print("Test case 2 failed: malloc returned NULL\n", strlen("Test case 2 failed: malloc returned NULL\n"));
  } else {
    free(ptr2);
    print("Test case 2 passed\n", strlen("Test case 2 passed\n"));
  }

  // Test case 3: Allocate multiple blocks of memory and check if they are distinct instances
  void* ptr3 = malloc(10);
  void* ptr4 = malloc(20);
  if (ptr3 == NULL || ptr4 == NULL) {
    print("Test case 3 failed: malloc returned NULL\n", strlen("Test case 3 failed: malloc returned NULL\n"));
  } else {
    if (ptr3 != ptr4) {
      print("Test case 3 passed: Memory blocks are distinct instances\n", strlen("Test case 3 passed: Memory blocks are distinct instances\n"));
    } else {
      print("Test case 3 failed: Memory blocks are not distinct instances\n", strlen("Test case 3 failed: Memory blocks are not distinct instances\n"));
    }
    free(ptr3);
    free(ptr4);
  }
  return 0;
}