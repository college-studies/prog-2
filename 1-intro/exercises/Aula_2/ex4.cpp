//4. Escreva um programa que leia uma frase do teclado e a imprima na tela sem espaços.
#include <iostream>
#include <string>

using namespace std;

int main()
{
	string phrase;
	int aux1 = 0, aux2 = 0;

	cout << "Type a phrase: ";
	getline(cin, phrase);

	for(auto c : phrase)
	{
		if(!isspace(c))
				phrase[aux1++] = phrase[aux2];   
		aux2++; 
	}
	
	phrase = phrase.substr(0,aux1);

	cout << phrase << endl;

	return 0;
}