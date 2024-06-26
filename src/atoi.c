int atoi(const char* str){
  int res = 0;
  if (str[0] == '-')
  {
    for (int i = 1; str[i] != '\0'; i++){
      res = res * 10 + str[i] - '0';
    }
    return -res;
  }

  for (int i = 0; str[i] != '\0'; i++){
    res = res * 10 + str[i] - '0';
  }
  return res;
}