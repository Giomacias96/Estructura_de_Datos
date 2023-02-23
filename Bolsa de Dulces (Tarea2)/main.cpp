#include <iostream>
#include "Bolsa.h"
using namespace std;

int main() {
  Bolsa b;

  b.MeterDulce(2,3);
  b.MeterDulce(1,5);
  b.Imprimir();
  b.SacarDulce(2,1);
  b.Imprimir();
  b.MeterDulce(3,1);
  b.SacarDulce(1,1);
  b.Imprimir();
  b.SacarDulce(2,1);
  b.Imprimir();
}