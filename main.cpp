#include lib.h
#include <iostream>
using namespace std;

int main(){
  
  char carattere;
  
  cin >> carattere;
  
  conversione(carattere);
  
  if(carattere)
  {
    cout << conversione(carattere) << endl;
  }
  else
  {
    cout << "errore" << endl;
  }
  
  return 0;
}

