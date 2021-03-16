#include <iostream>
#include <string>
using namespace std;

class Lampada
{
public:
  bool ligada;
  string tipo;
  int voltagem;
  int potencia;

  void ligar() { ligada = true; }

  void desligar() { ligada = false; }

  void status()
  {
    if (ligada)
      cout << "A lampada " << tipo << " esta ligada" << endl;
    else
      cout << "A lampada " << tipo << " esta desligada" << endl;
  }
};

int main()
{
  Lampada lamp1, lamp2;

  lamp1.tipo = "incadescente";
  lamp1.potencia = 60;
  lamp1.voltagem = 220;

  lamp1.ligar();
  lamp1.status();
  lamp1.desligar();
  lamp1.status();

  lamp2.tipo = "led";
  lamp2.potencia = 80;
  lamp2.voltagem = 110;

  lamp2.ligar();
  lamp2.status();
}