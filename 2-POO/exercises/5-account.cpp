#include <iostream>
#include <string>

using namespace std;

class Conta
{
private:
  int numero;
  string nome;
  float saldo;
  void setSaldo(float saldo) { this->saldo = saldo; }

public:
  Conta(int num, string name) : numero(num), nome(name), saldo(0.0){};
  Conta(int num, string name, float s) : numero(num), nome(name), saldo(s){};

  int getNumero() { return numero; }
  string getNome() { return nome; }
  float getSaldo() { return saldo; }
  void setNumero(int numero) { this->numero = numero; }
  void setNome(string nome) { this->nome = nome; }

  float depositar(float valor)
  {
    setSaldo(getSaldo() + valor);
    return saldo;
  }

  float sacar(float valor)
  {
    if (saldo - valor > 0)
    {
      saldo -= valor;
      return saldo;
    }
    else
    {
      cout << "Saldo insuficiente" << endl;
      return saldo;
    }
  }

  void imprime()
  {
    cout << "Conta Num: " + to_string(numero) << endl;
    cout << "Nome cliente: " + nome << endl;
    cout << "Saldo: " + to_string(saldo) << endl;
  }
};

int main()
{
  Conta c1(2020, "Fulano");
  Conta c2(3030, "Siclano", 2.00);

  c1.imprime();
  c2.imprime();

  c2.setNome("Beltrano");
  cout << c2.getNome();
  c2.depositar(2.00);
  c2.imprime();

  cout << "depois de sacar 1 real" << endl;
  cout << c2.sacar(1.00);
  cout << "depois de tentar sacar 4 reais" << endl;
  cout << c2.sacar(4.00);
}