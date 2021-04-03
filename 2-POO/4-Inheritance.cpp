#include <iostream>
using namespace std;

class Empregado{
  private:
    string nome;
    int cpf;
    double salario;

  public:

    Empregado(string nome, int cpf,double salario): nome(nome), salario(salario), cpf(cpf) {}
    
    string getNome() {return nome;}
    double getSalario() {return salario;}
    void aumentaSalario(double percent) { salario *= percent;}
};

class Gerente: public Empregado {
  private: 
    double bonus;

  public: 
    Gerente(string nome, int cpf, double salario, double bonus): Empregado(nome,salario,cpf), bonus(bonus) {}

    double getBonus() {return bonus;}
};

int main(){
  Empregado e("Fulano", 2500.00, 123);
  Gerente g("Beltrano", 3500.00, 456, 500.00);

  cout << e.getSalario();
  cout << g.getSalario() + g.getBonus() << endl;
}