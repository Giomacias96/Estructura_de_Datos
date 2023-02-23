#include <iostream>
#include <string.h>
#include "Stack.h"
const int p = 5;
using namespace std;
 

int main(){
  int x,a;
  int arr[p] = {10,2,35,1,200};

  TDA_Stack <int> p1;
  TDA_Stack <int> p2;
  
  try{
    for(int i=0;i<p;i++){
      p1.Push(arr[i]);
    }
    cout<< endl<< "Elementos de la pila: ";
    p1.Print();
    x = p1.Pop();
    p2.Push(x);
    while(!p1.isEmpty()){
      a = p1.Pop();
      if(a >= p2.Top()){
        p2.Pop();
        p2.Push(a);
      }
    }
    cout<< "El numero mayor de la pila es: ";
    p2.Print();
  }
  catch (const char * error)
    {
      cout<< "Excepcion: " << error;
    }
  
  return 0;
}