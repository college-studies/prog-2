//9. Escreva uma fun¸c˜ao void que receba dois valores inteiros como parˆametro e troque-os entre eles.
//Escreva um programa que teste a fun¸c˜ao, exibindo os valores antes e depois de sua chamada.

#include <iostream>
#include <string>

using namespace std;

void changeValue(int n1, int n2){
	int aux;

	aux = n1;
	n1 = n2;
	n2 = aux;

	cout << "\nValor de N1 depois : " << n1 << endl;
	cout << "Valor de N2 depois : " << n2 << endl;
}

int main() {

	int n1, n2;

	cout << "Valor para N1: ";
	cin >> n1;

	cout << "Valor para N2: ";
	cin >> n2;

	cout << "\nValor de N1 antes : " << n1 << endl;
	cout << "Valor de N2 antes : " << n2 << endl;

	changeValue(n1,n2);

	return 0;
}