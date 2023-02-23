#include "Matrix.h"

ADT_Matrix::ADT_Matrix(){
  rows = 0;
  columns = 0;
}

void ADT_Matrix::Create(int Rows, int Columns){
  rows = Rows;
  columns = Columns;
}

void ADT_Matrix::Initialize(int Value){  
  for(int i=0;i<rows;i++){
    for(int j=0;j<columns;j++){
      matriz[i][j] = Value;
    }
  }
}

void ADT_Matrix::Set(int Row, int Column, int Value){
  //for(int i=0;i<rows;i++){
    //for(int j=0;j<columns;j++){
      //cout<<endl<<"Digite un numero ["<<i<<"]["<<j<<"]: ";
      matriz[Row][Column] = Value;
   // }
  //}
}

int ADT_Matrix::Get(int Row, int Column){
  cout<<"El valor asignado en la matriz["<<Row<<"]["<<Column<<"] es: ";
  return matriz[Row][Column];
}

int ADT_Matrix::Rows(){
  cout<<"El numero de filas es: ";
  return rows;
}

int ADT_Matrix::Columns(){
  cout<<"El numero de columnas es: ";
  return columns;
}

void ADT_Matrix::Print(){
  cout<<"\n";
  for(int i=0;i<rows;i++){
    for(int j=0;j<columns;j++){
      cout<<matriz[i][j];
    }
    cout<<"\n";
  }
}