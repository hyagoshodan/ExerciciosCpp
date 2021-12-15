#include <iostream>

using namespace std;

int main()
{
    int numero;

    cout << "Calcule o volume de um cubo:" << endl;
    cout << "--------------------------" << endl;
    cout << "Insira o lado de um cubo: ";
    cin >> numero;
    cout << "O volume de um cubo é: " << numero * numero * numero << endl;

    return 0;
}