#include <iostream>
#include <string>

using namespace std;

class ItemFatura
{
private:
  int id;
  string nome;
  int qtd;
  float precoUnit;

public:
  //construtores
  ItemFatura() : id(0), nome("null"), qtd(0), precoUnit(0.0) {}
  ItemFatura(int id, string nome, int qtd, float precoUnit) : id(id), nome(nome), qtd(qtd), precoUnit(precoUnit) {}

  //modificadores
  void setId(int id) { this->id = id; }
  void setNome(string nome) { this->nome = nome; }
  void setQtd(int qtd) { this->qtd = qtd; }
  void setPrecoUnit(float precoUnit) { this->precoUnit = precoUnit; }

  //seletores
  int getId() { return id; }
  string getNome() { return nome; }
  int getQtd() { return qtd; }
  float getPrecoUnit() { return precoUnit; }

  float totalItem() { return qtd * precoUnit; }
  void imprime()
  {
    cout << "ID: " + to_string(id) << endl;
    cout << "NOME: " + nome << endl;
    cout << "QTD: " + to_string(qtd) << endl;
    cout << "PRECO UNITARIO: " + to_string(precoUnit) << endl;
    cout << "PRECO TOTAL: " + to_string(totalItem()) << endl;
  }
};

int main()
{

  ItemFatura item1;
  ItemFatura item2(1, "Memoria ram", 2, 340.50);

  item1.imprime();
  item2.imprime();

  item1.setId(77);
  item1.setNome("HD Samsung");
  item1.setQtd(3);
  item1.setPrecoUnit(285.99);

  item1.imprime();
  item2.setPrecoUnit(312.88);
  item2.imprime();
}