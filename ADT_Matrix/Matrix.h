#include <iostream>
using namespace std;

class ADT_Matrix{
  private:
    int rows, columns;
    int matriz[100][100];

  public:
    ADT_Matrix();

    void Create(int Rows, int Columns);
    void Initialize(int Value);
    void Set(int Row, int Column, int Value);
    int Get(int Row, int Column);
    int Rows();
    int Columns();
    void Print();
  
};