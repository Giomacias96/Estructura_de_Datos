#include "Bolsa.h"

Bolsa::Bolsa(){
  Azules = 0;
  Rojos = 0;
  Verdes = 0;
  Totales = 0;
}
void Bolsa::MeterDulce(int _color, int _cantidad){
  if(_color == 1){
      Azules += _cantidad;
    }
  if(_color == 2){
      Rojos += _cantidad;
    }
  if(_color == 3){
      Verdes += _cantidad;
    }
  Totales = Azules + Rojos + Verdes;
}
void Bolsa::SacarDulce(int _color, int _cantidad){
  if(_color == 1){
    Azules -= _cantidad;
  }
  if(_color == 2){
    Rojos -= _cantidad;
  }
  if(_color == 3){
    Verdes -= _cantidad;
  }
  Totales = Azules + Rojos + Verdes;
}
void Bolsa::Imprimir(){
  cout << endl <<"Dulces Azules: "<< Azules;
  cout << endl <<"Dulces Rojos: "<< Rojos;
  cout << endl <<"Dulces Verdes: "<< Verdes;
  cout << endl << "El total de dulces en la bolsa es: " << Totales<<endl;
}