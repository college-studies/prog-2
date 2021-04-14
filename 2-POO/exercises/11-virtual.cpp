// Crie uma classe abstrata FormaGeometrica que contenha um metodo puramente virtual chamado
// calculaArea. Crie uma classe Retangulo derivada da classe acima que contenha os atributos para
// os dois lados do retangulo.
// a) O que acontece se a classe Retangulo nao realizar a sobrescrita do metodo calculaArea? Por
// que?

// b) O que acontece se a classe Retangulo realizar a sobrescrita do metodo calculaArea sem
// utilizar a palavra-chave override? Por que?

// c) O que acontece se a classe Retangulo realizar a sobrescrita do metodo calculaArea, mas
// dizendo que tal metodo e const? Por que?

// Crie um metodo oi() na classe base, cuja implementacao e:
// cout << "oi, sou uma forma geometrica<endl;.
// Crie tambem o mesmo metodo na classe derivada, desta vez escrevendo: cout <<"oi, sou um
// retangulo<endl;
// .Assumindo que nenhum dos dois metodos sao virtuais, o que acontece se eu invocar o metodo oi() de um objeto Retangulo a partir de um ponteiro de um objeto FormaGeometrica ? Por que ? Permita que o metodo oi() possa ser invocado corretamente para um objeto Retangulo, mesmo a partir de um ponteiro de FormaGeometrica

#include <iostream>

using namespace std;

class FormaGeometrica
{
public:
  virtual double calculaArea(double base, double altura) = 0;
  virtual void oi()
  {
    cout << "oi, sou uma forma geometrica" << endl;
  }
};

class Retangulo : public FormaGeometrica
{
private:
  double lado_1;
  double lado_2;

public:
  Retangulo(double lado_1, double lado_2) : lado_1(lado_1), lado_2(lado_2){};

  double getLado_1() { return lado_1; }
  double getLado_2() { return lado_2; }

  double calculaArea(double base, double altura) override { return base * altura; }

  void oi() override
  {
    cout << "oi, sou um retangulo" << endl;
  }
};

int main()
{
  Retangulo retangulo(10, 10);
  FormaGeometrica *forma;
  forma = &retangulo;
  forma->oi();
}