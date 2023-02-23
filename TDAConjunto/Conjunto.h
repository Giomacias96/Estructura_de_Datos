#include <iostream>
using namespace std;

class Set{
  private:
    int array[10];
    int size=0;

  public:
    Set();

    void Empty();
    void Add(int x);
    void Delete(int x);
    bool isEmpty();
    int Size();
    bool In(int x);
    int Get(int Posicion);
    void Print();

    //Set Union(Set x, Set y);
};




