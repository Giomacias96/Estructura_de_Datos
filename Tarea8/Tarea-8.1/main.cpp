#include <iostream>
#include <string.h>
#include "Stack.h"
using namespace std;
 

int main(){
  int x;
  int arr[5] = {1,2,3,4,5} ;

  TDA_Stack <int> p1;
  TDA_Stack <int> p2;
  
  try{
    for(int i=0;i<arr[4];i++){
      p1.Push(arr[i]);
    }
    cout<< endl<< "Elementos de la pila: ";
    p1.Print();
    for(int j=0;j<arr[4];j++){
      p1.Pop();
      p2.Push(arr[j]);
    }
    while(!p2.isEmpty()){
      x = p2.Pop();
      p1.Push(x);
    }
    cout<<"Pila invertida: ";
    p1.Print();
    
  }
  catch (const char * error)
    {
      cout<< "Excepcion: " << error;
    }
  
  return 0;
}