//Escreva um programa que some todos os números pares entre 50 e 100.

#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
    int sum = 0;

    for (int numb = 50; numb <= 100; numb++)
    {

        if (numb % 2 == 0)
        {
            sum += numb;
        }
    }

    cout << sum << endl;

    return 0;
}
