//5.Escreva uma fun¸c˜ao para o c´alculo da distˆancia entre dois pontos no plano cartesiano. Os dois 
//pontos passados na fun¸c˜ao como argumentos devem ser expressados na forma de uma struct. Crie
//um programa que leia as coordenadas x e y do teclado para ambos os pontos e mostre na tela a
//distancia resultante.

#include <iostream>
#include <string>
#include <math.h>

using namespace std;

struct Points {
	double x1;
	double x2;
	double y1;
	double y2;
};

double distance(double x1, double y1, double x2, double y2) { 
	return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2) * 1.0); 
}

int main() 
{ 
	struct Points Points;

	cout << "Type the Points coordinates: ";
	cin >> Points.x1 >> Points.x2 >> Points.y1 >> Points.y2; 

	cout << distance(Points.x1, Points.x2, Points.y1, Points.y2) << endl; 
	return 0; 
} 
