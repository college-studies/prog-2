//Objetivo: testar a definição de literais ddiferentes tipos

#include <iostream>
using namespace std;

int main()
{
  int x = 10;
  int y = 055;
  int z = 0x2AC;

  float a = 15.5f;
  double b = 15.5l;
  float c = 3E-3f;

  cout << "x: " << x << "\ny: " << y << "\nz: " << z;
  cout << "\na: " << a << "\nb: " << b << "\nc: " << c << endl;

  return 0;
}
