#include <iostream>
#include <string>
#include <vector>

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
  Empregado e1("Fulano", 123, 2500.00);
  Empregado e2("Siclano", 777, 3500.00);
  Gerente g1("Beltrano", 999, 5000.00, 1000.00);
  Gerente g2("Trajano", 888, 8000.00, 500.00);
  double totalSalario = 0.0;

  vector<Empregado *> funcionarios;
  funcionarios.push_back(&e1);
  funcionarios.push_back(&e2);
  funcionarios.push_back(&g1);
  funcionarios.push_back(&g2);

  for (auto f : funcionarios)
  {
    totalSalario += f->getSalario();
  }

  cout << totalSalario << endl;
}