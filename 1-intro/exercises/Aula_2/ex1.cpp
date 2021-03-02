//1. Escreva um programa para ler duasstringse informar qual das duas s ̃ao maiores ou se s ̃ao iguais.
#include <iostream>
#include <string>

using namespace std;

int main(){

  string firstS, secondS;

  cout << "Type first string: ";
  cin >> firstS;

  cout << "Type second string: ";
  cin >> secondS;
  cout << endl;

  if(firstS.size() > secondS.size()){
    cout << firstS << " Has more characters than " << secondS << endl;
  }else if(firstS.size() == secondS.size()){
    cout << firstS << " Has the same amount of characters " << secondS << endl;
  }else{
    cout << firstS << " Has less characters than " << secondS << endl;
  }

}