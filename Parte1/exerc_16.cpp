#include <iostream>

using namespace std;

int main()
{
    int raio;
    int altura;
    int area;
    double pi = 3.14;
    double soma; 

    cout << "Calcule o volume de um cilindro:" << endl;
    cout << "-----------------------------" << endl;
    
    cout << "Insira o raio de um cilindro: ";
    cin >> raio;

    cout << "Insira a altura de um cilindro: ";
    cin >> altura;


    area = raio * raio;
    soma = area * pi * altura;

    cout << "O volume de um cilindro é: " << soma << endl;

    return 0;
}