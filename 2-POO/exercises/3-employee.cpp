/*
Crie a classe Empregado que contenha nome e salario. Crie dois metodos para ela: aumento(float
porcentagem) que aumente seu salario de acordo com a porcentagem passada no parametro e;
mostraDados() que imprime na tela o nome e o salario do funcionario. Teste a classe no programa
principal, mostrando os dados do funcionario antes e depois de um aumento concedido
*/
#include <iostream>
#include <string>
using namespace std;
class Empregado
{
public:
  string nome;
  float salario;

  void aumento(float porcentagem)
  {
    salario = ((porcentagem / 100) * salario) + salario;
  }

  void mostraDados()
  {
    cout << "----------------\n"
         << "Nome: " << nome << endl;
    cout << "Salário: " << salario << endl;
  }
};

int main()
{

  Empregado emp;

  cout << "Insira aqui o nome do Empregado: ";
  cin >> emp.nome;
  cout << "Digite agora o salario: ";
  cin >> emp.salario;

  cout << "\n--------SALARIO ANTES---------"
       << endl;
  emp.mostraDados();
  emp.aumento(10);
  cout << "\n--------SALARIO COM AUMENTO---------" << endl;
  emp.mostraDados();
}