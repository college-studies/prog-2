#include <iostream>

using namespace std;

int main()
{

  const int x = 10;
  const int y = 15;
  const int z = 55;

  const int *p = &x;

  cout << "\n*p = x = " << *p;

  p = &z;
  cout << "\n*p2 = x = " << *p;

  const int *const p2 = &x;
  cout << "\n*p2 = x = " << *p2;

  int k = 33;
  int *const p3 = &k;

  cout << "\n*p4 = k = " << *p3;

  cout << "\n*p4 = k = " << *p3 << endl;

  return 0;
}