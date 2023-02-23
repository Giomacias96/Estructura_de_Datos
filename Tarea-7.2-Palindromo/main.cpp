#include <iostream>
#include <string.h>
#include "Stack.h"
typedef char TipoDeDato;
using namespace std;
 

int main(){
  TDA_Stack <char> PilaC;
  //TipoDeDato ch;
  bool esPal;
  char pal[81];


  cout<<endl<< "Introduce una palabra: ";
  cin>>pal;

  for(int i = 0; i < strlen(pal); ){
    char c;
    c = pal[i++];
    PilaC.Push(c);
  }

  esPal = true;
  for(int j = 0; esPal && !PilaC.isEmpty(); ){
    char c;
    c = PilaC.Pop();
    esPal = pal[j++] == c;
  }

  PilaC.Empty();
  if(esPal)
    cout<< endl<< "La palabra " << pal << " es un palindromo.";
  else
    cout<< endl<< "La palabra " << pal << " no es un palindromo.";

  return 0;
}