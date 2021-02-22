//Reescreva o programa acima, criando a função par(x) para retornar verdadeiro caso o valor seja par.
#include <iostream>
using namespace std;

bool par(int x)
{
  if (x % 2 == 0)
    cout << x << " = True\n";
  return 1;
}

int main()
{
  int vet[] = {13, 2, 46, 89, 66, 3, 11, 0, 29, 55};

  for (int i = 0; i < 10; i++)
  {
    par(vet[i]);
  }

  cout << endl;
  return 0;
}