#include <iostream>
#include <string.h>
#include "Stack.h"
const int p = 5;
using namespace std;
 

int main(){
  int x;
  int arr[p] = {1,2,3,4,2};
  int a, acum=p;

  TDA_Stack <int> p1;
  TDA_Stack <int> p2;
  
  try{
    for(int i=0;i<p;i++){
      p1.Push(arr[i]);
    }
    cout<< endl<< "Elementos de la pila: ";
    p1.Print();
    cout<< "Que elemento n desea eliminar del 0 al "<<p-1<<": ";
    cin>>a;
    while(!p1.isEmpty()){
      acum--;
      x = p1.Pop();
      if(acum != a){
        p2.Push(x);
      }
    }
    while(!p2.isEmpty()){
      x = p2.Pop();
      p1.Push(x);
    }
    cout<<endl<< "Pila sin el indice "<<a<<": ";
    p1.Print();
  }
  catch (const char * error)
    {
      cout<< "Excepcion: " << error;
    }
  
  return 0;
}