/*
Crie a classe Partida, tendo como atributos o nome do time mandante, numero de gols do time
mandante, pontuacao do time mandante, nome do time visitante, numero de gols do time visitante e
pontuacao do time visitante. Crie um metodo resultado(string home, int goalHome, string
visitor, int goalVisitor) que permita definir nome e numero de gols dos times; crie um metodo
calculaPontos() que define os pontos conquistados pelos times depois do resultado consumado.
Crie tambem um metodo mostraResultado() que imprima na tela o resultado final como no
formato Visitante 4 x 2 Mandante. Instancie dois objetos desta classe e teste seus metodos no
programa principal....
*/
#include <iostream>
#include <string>

using namespace std;
class Partida
{
public:
  string nameHome;
  int goals_home;
  int points_home;

  string nameVisitor;
  int goals_visitor;
  int points_visitor;

  void resultado(string home, int goalHome, string visitor, int goalVisitor)
  {
    nameHome = home;
    goals_home = goalHome;
    nameVisitor = visitor;
    goals_visitor = goalVisitor;
  }

  void calculaPontos()
  {

    if (goals_home > goals_visitor)
    {
      points_home = 3;
      points_visitor = 0;
    }
    else if (goals_home < goals_visitor)
    {
      points_visitor = 3;
      points_home = 0;
    }
    else
    {
      points_home = 1;
      points_visitor = 1;
    }
  }

  void mostraResultado()
  {
    cout << nameVisitor << " " << goals_visitor << " x " << goals_home << " " << nameHome << endl;
  }
};

int main()
{
  Partida team1, team2;

  cout << "Nome de Casa: ";
  cin >> team1.nameHome;
  cout << "Gols: ";
  cin >> team1.goals_home;

  cout << "\nNome Visitante: ";
  cin >> team2.nameVisitor;
  cout << "Gols: ";
  cin >> team2.goals_visitor;

  team1.resultado(team1.nameHome, team1.goals_home, team2.nameVisitor, team2.goals_visitor);
  team1.calculaPontos();
  team1.mostraResultado();
}