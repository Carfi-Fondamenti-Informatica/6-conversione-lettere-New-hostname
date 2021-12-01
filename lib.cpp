#include lib.h
char carattere(char carattere){

  if(carattere >= 'A' && carattere <= 'Z')
  {
    char ris = carattere + 32;
    
    return ris;
  }
  else if(carattere >= 'a' && carattere <= 'z')
  {
    char ris = carattere - 32;
    
    return ris;
  }
}
