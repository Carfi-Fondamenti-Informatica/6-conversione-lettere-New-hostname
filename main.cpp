#include lib.h
#include <iostream>
using namespace std;

int main(){
  
  char carattere, sol;
  
  cin >> carattere;
  
  sol = lettera(carattere);
  
  if(sol == 1)
  {
    cout << sol << endl;
  }
  else
  {
    cout << "errore" << endl;
  }
  
  return 0;
}

