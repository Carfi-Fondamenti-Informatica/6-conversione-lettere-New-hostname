#include <iostream>
#include lib.h
using namespace std;

int main(){
  
  char carattere, sol;
  
  cin >> carattere;
  
  sol = lettera(carattere);
  
  if(sol != '0')
  {
    cout << sol << endl;
  }
  else
  {
    cout << "errore" << endl;
  }
  
  return 0;
}

