#include <iostream>
#include "Dulces.h"
using namespace std;


class Bolsa{
Dulces d;

  public:
    Bolsa();
    void MeterDulce(int _color, int _cantidad);
    void SacarDulce(int _color, int _cantidad);

    void Imprimir();
};

