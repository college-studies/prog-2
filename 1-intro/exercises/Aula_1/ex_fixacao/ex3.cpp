//Escreva um programa que exiba na tela os N primeiros números quadrados.Exemplo : Para N = 5, imprima 1, 4, 9, 16, 25
#include <iostream>

using namespace std;

int main()
{

  int n;
  int squared;

  cout << "\nIf you want to stop , just type a letter";
  cout << "\nEnter a number: ";

  while (cin >> n)
  {
    squared = n * n;
    cout << "Squared Numbers = " << squared << endl;
  }

  return 0;
}