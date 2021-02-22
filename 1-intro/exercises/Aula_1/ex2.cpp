//Escreva um programa que leia uma temperatura em Fahrenheit e mostre o equivalente em Celsius
#include <iostream>
using namespace std;

int main()
{
  float temp;

  cout << "Digite a temperatura (F): ";
  cin >> temp;
  cout << "A temperatura em C eh: " << ((temp - 32) * 5 / 9) << "F" << endl;

  return 0;
}