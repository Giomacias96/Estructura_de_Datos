#include "Stack.h"

template <class T> TDA_Stack<T>::TDA_Stack() {
  TOP = INITIAL_VALUE;
}

template <class T> bool TDA_Stack<T>::isEmpty(){
  return TOP == INITIAL_VALUE;
}

template <class T> bool TDA_Stack<T>::isFull(){
  return TOP == TAM - 1;
} 

template <class T> void TDA_Stack<T>::Empty(){
  TOP = INITIAL_VALUE;
} 

template <class T> bool TDA_Stack<T>::Push(T element) {
  if(isFull())
    return false;
    
  arrStack[TOP++] = element;
  
  return true;
}

template <class T> T TDA_Stack<T>::Pop(){
  if(isEmpty())
    throw "POP no realizado por pila vacia.";
  
  T aux;
  aux = arrStack[--TOP];

  return aux;  
} 

template <class T> T TDA_Stack<T>::Top(){
  if(isEmpty())
    throw "TOP no realizado por pila vacia.";

  return arrStack[TOP-1];
}

template <class T> void TDA_Stack<T>::Print(){
  cout << "[";

  for (int i = 0; i < TOP; i++)
    cout << arrStack[ i ] << ", ";

  cout << "]" << endl << endl;
}

template class TDA_Stack<float>;
template class TDA_Stack<int>;
template class TDA_Stack<char>;





