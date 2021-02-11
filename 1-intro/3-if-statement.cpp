#include <iostream>

// using elimina a necessidade de usar o prefixo std
using std::cin;
using std::cout;
using std::endl;

int main()
{

  float numb1 = 5;
  float numb2 = 2;

  if (numb1 > numb2)
    cout << numb1 << " is bigger than " << numb2 << endl;

  if (numb1 < numb2)
  {
    cout << numb1 << " is less than " << numb2 << endl;
  }
  else
  {
    cout << numb1 << " is not less than " << numb2 << endl;
  }

  if (numb1 == numb2)
  {
    cout << numb1 << " is bigger than " << numb2 << endl;
  }
  else
  {
    cout << numb1 << " is not equal to  " << numb2 << endl;
  }

  return 0;
}