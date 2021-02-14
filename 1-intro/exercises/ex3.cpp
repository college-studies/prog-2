// Escreva um programa que leia um número indeterminado de inteiros do usuário e imprima sua soma.
#include <iostream>

using namespace std;

int main()
{

  float sum = 0;
  float numb;

  cout << "\nIf you want to stop, just type a letter";
  cout << "\nEnter a number: ";
  while (cin >> numb)
  {
    sum += numb;
  }

  cout << "Sum = " << sum << endl;

  return 0;
}
