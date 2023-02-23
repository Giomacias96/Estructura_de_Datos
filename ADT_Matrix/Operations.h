#include "Matrix.h"
#include <iostream>

using namespace std;

class Operations{
  ADT_Matrix d;
  private:
    int Matriz3[100][100];

  public:
    ADT_Matrix Add(ADT_Matrix A, ADT_Matrix B){
      /*for(int i=0;i<=2;i++){
        for(int j=0;j<=2;j++){
          Matriz3[i][j] = d.Get(i,j)+ d.Get(i,j);
          //cout<<Matriz3[i][j];
        }
      }*/
      //return Matriz3;
    }

    ADT_Matrix Print(){
      d.Print();
    }
};