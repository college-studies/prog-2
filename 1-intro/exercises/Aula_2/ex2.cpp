//2. Escreva um programa que leia uma strings e gere outra com o conte ́udo da primeira invertido.
#include <iostream>
#include <string>

using namespace std;

int main()
{

  string word, invWord;

  cin >> word;

  for (int i = word.length() - 1; i >= 0; i--)
  {
    invWord += word[i];
  }

  cout << invWord << endl;
}
