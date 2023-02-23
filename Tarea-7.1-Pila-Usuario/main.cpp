#include <iostream>
#include "Stack.h"
using namespace std;
 
int main(){
  int n,x;

  TDA_Stack <int> s;
  cout<<endl<< "Cuantos elementos quiere agregar a la pila? ";
  cin>>n;
  try{
    for(int i = 0; i<n; i++){
      cout<< "Agregre un numero: ";
      cin>>x;
      s.Push(x);
    }
    cout<< endl<< "Elementos de la pila: ";
    s.Print();
  }
  catch (const char * error)
    {
      cout<< "Excepcion: " << error;
    }
  
  return 0;
}

