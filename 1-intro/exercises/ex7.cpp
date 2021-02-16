// Escopos de variaveis
#include <iostream>
using namespace std;

int var1 = 30; //variavel global

int main()
{

  int var2 = 15;
  cout << var1 << " " << var2 << endl;

  int var1 = 15;
  cout << var1 << " " << var2 << endl;

  {
    int var3 = 55;
    cout << var3 << " " << var2 << endl;
  }

  //erro var3 fora de escopo
  // cout << var3 << " " << var2 << endl;

  return 0;
}