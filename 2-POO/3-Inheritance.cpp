#include <iostream>
#include <string>

using namespace std;

class Empregado
{
private:
  int cpf;
  string nome;

protected:
  double salario;

public:
  Empregado(string nome, int cpf, double salario) : nome(nome), cpf(cpf), salario(salario) {}

  string getNome() { return nome; }
  virtual double getSalario() { return salario; }
  void aumentaSalario(double percent) { salario = salario * (1 + percent); }
};

class Gerente : public Empregado
{
private:
  double bonus;

public:
  Gerente(string nome, int cpf, double salario, double bonus) : Empregado(nome, cpf, salario), bonus(bonus) {}

  double getBonus() { return bonus; }
  double getSalario() override { return salario + getBonus(); }
};

int main()
{
  Empregado e("Fulano", 123, 2500.00);
  Gerente g("Beltrano", 999, 5000.00, 1000.00);

  cout << e.getSalario() << endl;
  cout << g.getSalario() << endl;
}