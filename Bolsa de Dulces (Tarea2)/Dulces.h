#include <iostream>
using namespace std;

class Dulces{
  private:
    int Azules;
    int Rojos;
    int Verdes;

    int Totales;
  public:
    Dulces();
    void MeterDulce(int _color, int _cantidad);
    void SacarDulce(int _color, int _cantidad);

    void Imprimir();
};

