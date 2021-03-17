/*
Crie a classe Partida, tendo como atributos o nome do time mandante, numero de gols do time
mandante, pontuacao do time mandante, nome do time visitante, numero de gols do time visitante e
pontuacao do time visitante. Crie um metodo resultado(string home, int goalHome, string
visitor, int goalVisitor) que permita definir nome e numero de gols dos times; crie um metodo
calculaPontos() que define os pontos conquistados pelos times depois do resultado consumado.
Crie tambem um metodo mostraResultado() que imprima na tela o resultado final como no
formato Visitante 4 x 2 Mandante. Instancie dois objetos desta classe e teste seus metodos no
programa principal
*/
#include <iostream>
#include <string>
using namespace std;
class Partida
{
public:
  string home_Name;
  int goalHome;
  int pontCasa;

  string visitor_Name;
  int goalVisitor;
  int pontVisitante;

  void resultado(string home, int goalHome, string visitor, int goalVisitor)
  {
  }

  void calculaPontos() {}
  void mostraResultado() {}
};

int main()
{
  Partida home, visitor;

  cout << "Nome time de casa: ";
  cin >> home.home_Name;
  cout << "\nNome time visitante: ";
  cin >> visitor.visitor_Name;
}