#include <iostream>

int main(){

  int number1;
  int number2;

  std::cout << "\nEnter a Int number: ";
  std::cin >> number1; 

  std::cout << "\nEnter another Int number: ";
  std::cin >> number2; 

  float sum = number1 + number2;
  std::cout << "\n  Sum = " << sum << std::endl; //std::endl quebra de linha e limpa o buffer de saida

  float subtract = number1 - number2;
  std::cout << "\n  Subtract = " << subtract << std::endl; //std::endl quebra de linha e limpa o buffer de saida
  
  float division = number1 / number2;
  std::cout << "\n  Division = " << division << std::endl; //std::endl quebra de linha e limpa o buffer de saida

  float divisionRest = number1 % number2;
  std::cout << "\n  DivisionRest = " << divisionRest << std::endl; //std::endl quebra de linha e limpa o buffer de saida


  float multi = number1 * number2;
  std::cout << "\n  Multi = " << multi << std::endl; //std::endl quebra de linha e limpa o buffer de saida


  return 0;
}