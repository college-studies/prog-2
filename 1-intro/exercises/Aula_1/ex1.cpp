//Escreva um programa para ler dois números do teclado e imprimir o maior entre eles
#include <iostream>
using namespace std;

int main()
{
  int n1, n2;

  cout << "Digite o primeiro número: ";
  cin >> n1;
  cout << "Digite o primeiro número: ";
  cin >> n2;

  if (n1 > n2)
    cout << "O maior valor eh: " << n1 << "\n";
  else
    cout << "O maior valor eh: " << n2 << "\n";

  return 0;
}