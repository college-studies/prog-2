//Escreva um programa em C que leia N números do teclado e apresente a somatória e a média aritmética dos números digitados.
#include <iostream>
using namespace std;

int main()
{

	int n = 0;
	float sum = 0;
	float numb, average;

	cout << "\nIf you want to stop , just type a letter";
	cout << "\nEnter numbers: ";

	while (cin >> numb)
	{
		sum += numb;
		n++;
		average = sum / n;
	}

	cout << "Sum = " << sum << endl;
	cout << "Average = " << average << endl;
}
