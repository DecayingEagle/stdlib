#include "types.h"

#ifndef STRLEN_H
#define STRLEN_H

// Function declaration
size_t strlen(const char* str){
  size_t len = 0;
  while (str[len] != '\0') {
    ++len;
  }
  ++len;
  return len;
};

#endif // STRLEN_H