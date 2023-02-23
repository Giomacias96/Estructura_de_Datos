#include "Bolsa.h"


Bolsa::Bolsa(){
  
}
void Bolsa::MeterDulce(int _color, int _cantidad){
  d.MeterDulce(_color,_cantidad);
}
void Bolsa::SacarDulce(int _color, int _cantidad){
  d.SacarDulce(_color, _cantidad);
}
void Bolsa::Imprimir(){
  d.Imprimir();
}