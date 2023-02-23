#include <iostream>
#include "Operations.h"
//#include "Conjunto.h"
using namespace std;

int main() {
  Set c1,c2;
  Operations c3;

  cout<<endl<<c1.isEmpty();
  c1.Add(5);
  c1.Add(3);
  c1.Add(4);
  c1.Add(2);
  c1.Add(2);
  
  c1.Print();
  c1.Delete(2);
  c1.Delete(25);
  c1.Add(8);
  c1.Add(15);
  c1.Add(20);
  c1.Print();
  cout<<endl<<c1.isEmpty();
  cout<<endl<<c1.Get(5);
  cout<<endl<<c1.Size();
  cout<<endl<<c1.In(30);

  c1.Empty();
  c1.Add(30);
  c1.Print();
  cout<<endl<<c1.Size();

  c2.Add(10);
  c2.Add(20);
  c2.Add(30);
  c2.Print();
  
  /*c3.Union(c1,c2);
  c3.Print();*/
  //c3.CreateEmptySet();
}