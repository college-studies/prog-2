//3. Escreva um programa para ler uma frase do teclado e imprimir na tela a quantidade de palavras que foram digitadas.
#include <iostream>
#include <string>

using namespace std;

int main()
{
  string phrase;
  int countWords = 0; 
  int i = 0;

  cout << "Type a phrase: ";
  getline(cin, phrase);

  if(phrase[phrase.size()-1] != ' '){
    phrase += " ";  
  }

  while(i < phrase.size())
  {
    if(isspace(phrase[i]))
        countWords++;
    i++;
  }   

  cout << "Number of words = " << countWords << endl;    
}