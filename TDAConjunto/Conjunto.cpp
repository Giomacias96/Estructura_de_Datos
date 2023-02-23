#include "Conjunto.h"

Set::Set(){
  size = 0;
}
void Set::Empty(){
  size=0;
}
void Set::Add(int x){
  if(!In(x)){
    array[size] = x;
    size++;
  }else{
    cout<<endl<<"El numero "<<x<<" ya se encuentra en el arreglo.";
  }
}
void Set::Delete(int x){
  if(In(x)){
    for(int i=0;i<size;i++){
      if(x == array[i]){
        size--;
      }
    }
  }else{
    cout<<endl<<"El numero "<<x<<" no se encuentra en el arreglo.";
  }
}
bool Set::isEmpty(){
  if(size == 0){
    return true;
  }
  else{
    return false;
  }
}
int Set::Size(){
  int i;
  for(i=0;i<size;i++){
  }
  cout<<endl<<"La cardinalidad del vector es: ";
  return i;
}
bool Set::In(int x){
  for(int i=0;i<size;i++){
    if(array[i] == x){
      return true;
    }
  }
  return false;
}
int Set::Get(int Posicion){
  cout<<endl<<"El numero en la Posicion "<<Posicion<<" es: ";
  return array[Posicion];
}

void Set::Print(){
  cout<<endl;
  for(int i=0;i<size;i++){
    cout<<endl<<"El numero en la posicion "<<i<<" del vector es: "<<array[i];
  }
  cout<<endl;
}

/*Set Set::Union(Set x, Set y){
  
}*/
