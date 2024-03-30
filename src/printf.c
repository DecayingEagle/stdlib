//Format specifiers
//%[flags][width][.precision][length]specifier

int printf(const char* format, ...){
  int ret = 0;
  int i = 0;


  while(format[i] != '\0'){
    if(format[i] == '%'){
      ++i;
      switch (format[i]){
      case 'd':
        
        break;
      
      default:
        break;
      }
    }
  }
}
