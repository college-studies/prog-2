//8.  Escreva uma fun¸c˜ao que receba um vetor e duas vari´aveis max e min. A fun¸c˜ao deve retornar a
//posi¸c˜ao do vetor do valor m´aximo e garantir que as vari´aveis min e max contenham o menor e o
//maior valor do vetor, respectivamente. Escreva um programa para testar a fun¸c˜ao

#include <iostream>
#include <string>

using namespace std;

int checkArray(int vet[], int max, int min){
	int maxPosition;
	int i;

	for(i = 0; i < 10; i++){

		if(vet[i] > max){
			max = vet[i];
			maxPosition = i;
		}

		if(vet[i] < min){
			min = vet[i];
		}
	}	

	cout << "\nMax Value: " << max << endl;
	cout << "Min Value: " << min << endl;

	return maxPosition;
}


int main() {

	int vet[10];
	int max = -999;
	int min = 999;
	int maxPosition;
	int i;

	for(i = 0; i < 10; i++){
		cout << "Insert the value into the position " << i << " : ";
		cin >> vet[i];
	}

	maxPosition = checkArray(vet, max, min);

	cout << "Max Position Value: " << maxPosition << endl;

	return 0;
}