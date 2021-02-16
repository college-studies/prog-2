// Formas de inicializar variavel

#include <iostream>

using namespace std;

int main()
{
  long double pi = 3.1415926536;
  int a(pi);
  int b = pi;
  int c = {pi}; //erro, perda de precisao

  cout << "a: " << a << "\nb: " << b << "\nc: " << c << endl;

  return 0;
}