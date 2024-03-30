#include "itoa.h"

void itoa (int val, char* str, int base){
  char charset[36] = "0123456789abcdefghijklmnopqrstuvwxyz";
  int len = 0;
  while (val) {
    str[len++] = charset[val % base];
    val /= base;
  }
  // reverse the string
  for (int i = 0, j = len - 1; i < j; i++, j--) {
    char tmp = str[i];
    str[i] = str[j];
    str[j] = tmp;
  }
  str[len] = '\0';
}
