#include <iostream>
#include "Operations.h"
using namespace std;

int main() {
  ADT_Matrix A,B;
  Operations C;
  int f1,c1,f2,c2;
  
  cout<<endl<<"Ingresa numero de filas: ";
  cin>>f1;
  cout<<endl<<"Ingresa numero de columnas: ";
  cin>>c1;

  A.Create(f1, c1);
  A.Initialize(2);
  A.Set(0,0,3);
  A.Set(0,1,5);
  A.Set(1,0,4);
  A.Set(1,1,6);
  A.Print();

  cout<<endl<< A.Get(1,1);
  cout<<endl<< A.Rows();
  cout<<endl<< A.Columns();

  cout<<"\n";
  cout<<endl<<"Ingresa numero de filas: ";
  cin>>f2;
  cout<<endl<<"Ingresa numero de columnas: ";
  cin>>c2;

  B.Create(f2, c2);
  B.Initialize(3);
  B.Set(0,0,7);
  B.Set(0,1,8);
  B.Set(1,0,6);
  B.Set(1,1,5);
  B.Print();

  cout<<endl<< B.Get(1,1);
  cout<<endl<< B.Rows();
  cout<<endl<< B.Columns();



  //C.Add(A,B);
  //C.Print();
  
  
}