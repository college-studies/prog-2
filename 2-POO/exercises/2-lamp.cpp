/*
Reproduza o exemplo trabalhado durante a aula da classe Lampada exatamente como foi feito,
adicionando a ela o metodo ehEconomica(). Este metodo retornar verdadeiro se a potencia da
lampada for menor que 40 e falso, caso contrario. Instancie um objeto e teste todos os metodos
implementados
*/

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

  void ehEconomica()
  {
    bool economica;
    if (potencia < 40)
    {
      economica = true;
      cout << "Não é economica" << economica << endl;
    }
    else
    {
      economica = false;
      cout << "É economica: " << economica << endl;
    }
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
  lamp1.ehEconomica();

  lamp2.tipo = "led";
  lamp2.potencia = 30;
  lamp2.voltagem = 110;

  lamp2.ligar();
  lamp2.status();
  lamp2.ehEconomica();
}