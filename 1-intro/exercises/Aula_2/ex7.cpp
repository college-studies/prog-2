//7. Crie uma estrutura representando um triˆangulo, que contenha o tamanho de cada um de seus trˆes
//lados. Crie um programa que leia os trˆes lados do triˆangulo de um objeto desta estrutura e informe
//se o triˆangulo ´e escaleno ou n˜ao.

#include <iostream>
#include <string>

using namespace std;

struct Sides{
	int a, b, c;
};

void checkType(int a, int b, int c){
	if(a == b == c){
		cout << "\nThis is an Equilateral Triangle" << endl;
	}
	else if(a == b || b == c || a == c){
		cout << "\nThis is an Isosceles Triangle" << endl;
	}
	else
		cout << "\nThis is a Scalene Triangle" << endl;
}

int main() {

	struct Sides Side;

	cout << "\nEnter Three Sides of a Triangle =  ";
	cin >> Side.a >> Side.b >> Side.c;
	
	checkType(Side.a, Side.b, Side.c);
		
 	return 0;
}