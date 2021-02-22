//Escreva um programa que exiba a somatória dos N primeiros números pares.
#include <iostream>

using namespace std;

int main()
{

  int sum = 0;
  int numb;

  cout << "\nIf you want to stop , just type a letter";
  cout << "\nEnter a number: ";

  while (cin >> numb)
  {
    if (numb % 2 == 0)
    {
      sum += numb;
    }
  }

  cout << "Sum of Even = " << sum << endl;

  return 0;
}