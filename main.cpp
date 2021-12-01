#include lib.h
#include <iostream>
using namespace std;

int main(){
  
  char carattere;
  
  cin >> carattere;
  
  lettera(carattere);
  
  if(carattere)
  {
    cout << lettera(carattere) << endl;
  }
  else
  {
    cout << "errore" << endl;
  }
  
  return 0;
}

