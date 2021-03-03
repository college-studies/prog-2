//10. Escreva uma fun¸c˜ao de nome incrementa que receba como argumento um inteiro e adicione mais
//um ao seu valor. Escreva um programa que imprima a vari´avel passada antes e depois da chamada
//da fun¸c˜ao.

#include <iostream>
#include <string>

using namespace std;

int incremento(int value){
	value +=1;

	return value;
}

int main() {

	int value;

	cout << "Digite um valor: ";
	cin >> value;

	value = incremento(value);
	cout << "Valor incrementado: " << value << endl;

	return 0;
}