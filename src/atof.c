double atof(const char* str) {
  double res = 0;
  double dec = 0;
  int i = 0;

  if (str[0] == '-')
  {
    i++;
  }

  for (i; str[i] != '.'; i++){
    res = res * 10 + str[i] - '0';
  }
  i++;
  for (i; str[i] != '\0'; i++){
    dec = res * 0.1f + str[i] - '0';
  }

  if (str[0] == '-')
  {
    return -res - dec;
  }

  return res + dec;
}