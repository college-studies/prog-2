#include <iostream>

using std::cout;
using std::endl;

int main(){

  int sum = 0;
  int numb = 1;

  while (numb <= 10){
    sum += numb;
    numb += 1;
  }

  cout << "\n Final value = " << sum << endl;
  return 0;
}