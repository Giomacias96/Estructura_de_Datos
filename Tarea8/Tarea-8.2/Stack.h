#include <iostream>
const int TAM = 20;
const int INITIAL_VALUE = 0;

using namespace std;

template <class T> class TDA_Stack {
  private: 
	  int TOP; 
	  T arrStack[TAM]; 

  public:
    TDA_Stack();

    bool Push(T element);
    T Pop();
    void Empty();
    T Top();
    bool isEmpty();
    bool isFull();

    void Print();
};