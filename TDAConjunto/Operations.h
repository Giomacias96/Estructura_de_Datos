#include <iostream>
#include "Conjunto.h"
using namespace std;

class Operations{
Set d;

  public:
    Operations();
    Set Union(Set x, Set y);
    Set CreateEmptySet();
    bool isSubset(Set x,Set y);
    void Print();
};

