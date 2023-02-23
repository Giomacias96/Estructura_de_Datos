#include <iostream>
using namespace std;


class Bolsa{
  private:
    int Azules;
    int Rojos;
    int Verdes;
    int Cantidad;
    string Color;

    int Totales;

  public:
    Bolsa(){
      Azules = 0;
      Rojos = 0;
      Verdes = 0;
      Cantidad = 0;
      Totales = 0;
    };
    int MeterDulce(int _color, int _cantidad){
      Color = _color; 
      Cantidad = _cantidad;
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
      return Totales;
    }
    int SacarDulce(int Color, int Cantidad);

    void Imprimir(){
      cout << endl <<"Dulces Azules: "<< Azules;
      cout << endl <<"Dulces Rojos: "<< Rojos;
      cout << endl <<"Dulces Verdes: "<< Verdes;
      cout << endl << "El total de dulces en la bolsa es: " << Totales;
    }
};