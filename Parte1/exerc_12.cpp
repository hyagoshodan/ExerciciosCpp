#include <iostream>

using namespace std;

int main()
{
    int numero1;
    int numero2;
    int soma;

    cout << "Soma de dois números:" << endl;
    cout << "----------------" << endl;
    
    cout << "Insira o primeiro número: ";
    cin >> numero1;

    cout << "Insira o segundo número: ";
    cin >> numero2;

    soma = numero1 + numero2;

    cout << "A soma dos números são: " << soma << endl;

    return 0;
}