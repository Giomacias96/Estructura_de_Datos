#include <iostream>
#include <string.h>
#include "Stack.h"
using namespace std;
 

int main(){
  char x;
  char arr[] = "HolaMundo" ;
  char a;

  TDA_Stack <char> p1;
  TDA_Stack <char> p2;
  
  try{
    for(int i=0;i<strlen(arr);i++){
      p1.Push(arr[i]);
    }
    cout<< endl<< "Elementos de la pila: ";
    p1.Print();
    cout<< "Que letra desea eliminar: ";
    cin>>a;
    while(!p1.isEmpty()){
      x = p1.Pop();
      if(x != toupper(a) && x != tolower(a))
        p2.Push(x);
    }
    while(!p2.isEmpty()){
      x = p2.Pop();
      p1.Push(x);
    }
    cout<<endl<< "Pila sin la letra "<<a<<": ";
    p1.Print();
  }
  catch (const char * error)
    {
      cout<< "Excepcion: " << error;
    }
  
  return 0;
}