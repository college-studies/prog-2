//6. Crie uma estrutura representando um retˆangulo, que armazene sua altura e largura. Crie uma
//fun¸c˜ao que receba tal estrutura e retorne a ´area do retˆangulo passado como parˆametro.

#include <iostream>
#include <string>

using namespace std;

struct Rectangle{
	int length;
	int breadth;
};

int rectArea(int length, int breadth){
	int area = length*breadth;
	return area;
}

int main() {

	struct Rectangle Rectangle;

	cout << "\nEnter the Length of Rectangle: ";
	cin >> Rectangle.length;

	cout << "\nEnter the Breadth of Rectangle: ";
	cin >> Rectangle.breadth;

	cout << "\nArea of Rectangle : " << rectArea(Rectangle.length, Rectangle.breadth) << endl;

  return 0;
}