// Objetivo: Testar os resultados de conversões entre tipos numericos primitivos

#include <iostream>

using namespace std;

int main()
{

  float a = 5.5;
  int b = a;
  bool c = a;

  unsigned short x = 55;
  unsigned short y = 65600;
  unsigned short z = -10;

  cout << "a: " << a << "\nb: " << b << "\nc: " << c << endl;
  cout << "\nx: " << x << "\ny: " << y << "\nz: " << z << endl;

  return 0;
}