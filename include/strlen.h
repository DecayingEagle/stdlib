#include "types.h"

#ifndef STRLEN_H
#define STRLEN_H

/**
 * Calculates the length of a null-terminated string.
 *
 * This function takes a null-terminated string as input and returns the length
 * of the string excluding the null character ('\0').
 *
 * @param str The null-terminated string to calculate the length of.
 * @return The length of the string.
 */
size_t strlen(const char* str){
  size_t len = 0;
  while (str[len] != '\0') {
    ++len;
  }
  ++len;
  return len;
};

#endif // STRLEN_H