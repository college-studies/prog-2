/*
Crie a classe Triangulo, tendo como atributos sua base e altura. Por enquanto, mantenha todo o
conteudo da classe como public e crie um metodo calculaArea() que, quando invocado, imprima
na tela a area do triangulo que o invocou. No programa principal, instancie e inicialize com valores
digitados do teclado dois objetos desta classe e invoque o metodo para ambos.
*/

#include <iostream>
#include <string>
using namespace std;

class Triangle{
  public:
    float base;
    float height;

    void calculateArea(){
      float area = (base*height) / 2;
      cout << "The Area of the triangle is: " << area << endl;  
    }
};

int main(){

  Triangle firstT, secondT;

  cout << " -- First triangle -- " << endl;
  cout << "Base Value: ";
  cin >> firstT.base;

  cout << "Height Value: ";
  cin >> firstT.height;

  firstT.calculateArea();

  cout << "\n -- Second triangle -- " << endl;
  cout << "Base Value: ";
  cin >> secondT.base;

  cout << "Height Value: ";
  cin >> secondT.height;

  secondT.calculateArea();

}