#include lib.h
char lettera(char carattere){

  if(carattere >= 'A' && carattere <= 'Z')
  {
    carattere = carattere + 32;
    
    return carattere;
  }
  else if(carattere >= 'a' && carattere <= 'z')
  {
    carattere = carattere - 32;
    
    return carattere;
  }
  else
  {
    return '0';
  }
}
