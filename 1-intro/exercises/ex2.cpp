//Escreva um programa para calcular a soma série 1^2 + 2^2 + ... + n^2 , onde o n-ésimo termo é informado pelo usuário.
#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{

  int sum = 0;
  int i = 0;
  int numb;

  cout << "Type an int number: ";
  cin >> numb;

  while (i <= numb)
  {
    sum += i * i;
    i++;
  }

  cout << "Final Sum = " << sum << endl;

  return 0;
}
