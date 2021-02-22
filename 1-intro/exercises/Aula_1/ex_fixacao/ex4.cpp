//Escreva um programa que calcule o fatorial de um inteiro positivo informado pelo teclado.
#include <iostream>

using namespace std;

int main()
{

  int n, fact = 1;

  cout << "Type a number:";
  cin >> n;
  for (int i = 1; i <= n; i++)
  {
    fact *= i;
  }
  cout << "Factorial:" << fact << endl;

  return 0;
}