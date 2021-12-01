#include lib.h
char carattere(char carattere){

  if(carattere >= 'A' && carattere <= 'Z')
  {
    int ris = carattere + 32;
    
    return ris;
  }
  else if(carattere >= 'a' && carattere <= 'z')
  {
    int ris = carattere - 32;
    
    return ris;
  }
}
