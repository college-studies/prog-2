// Escreva um programa que leia um vetor de inteiro de tamanho 10 e imprima somente os pares.
#include <iostream>
using namespace std;

int main()
{
  int vet[] = {13, 2, 46, 89, 66, 3, 11, 0, 29, 55};

  for (int i = 0; i < 10; i++)
  {
    if (vet[i] % 2 == 0)
      cout << vet[i] << "\n";
  }
  cout << endl;
  return 0;
}