#include <iostream>
#include "Stack.h"
using namespace std;
 

int main(){
  cout << "a)" << "************* Pila de caracteres: " << endl;
  TDA_Stack <char> c;
  c.Push('A');
  c.Push('B');
  c.Print();


  cout << "b)" << "************* Pila de enteros: " << endl;
  TDA_Stack <int> s;
  s.Push(1);
  s.Push(2);
  s.Push(3);
  s.Print();


  cout << "c)"<< "************* Pila de flotantes: " << endl;
  TDA_Stack <float> f;
  f.Push(12.3);
  f.Push(8.9);
  f.Print();

  try{
    cout << "POP: " << f.Pop() << endl;
    cout << "POP: " << f.Pop() << endl;
    cout << "POP: " << f.Pop() << endl;
    
    cout << "TOP: " << f.Top() << endl;
  }
  catch ( const char* e ){
    cout << e << endl;
  }
  
}