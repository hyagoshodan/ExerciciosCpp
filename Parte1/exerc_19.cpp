#include <iostream> 
#include <stdio.h>

using namespace std;

int main()
{
    double raio;
    double area;
    double circuferencia;
    double pi = 3.14;

    cout << "Encontre a área e a circunferência de qualquer círculo:\n";
    cout << "----------------------------------------------------\n";
    cout << "Insira o raio (1/2 do diâmetro) de um círculo: ";
    cin >> raio;   

    area = pi * ( raio * raio );
    cout << "A área do círculo é: " << area << endl;
    
    circuferencia = 2 * pi * raio;
    cout << "A circunferência do círculo é: " << circuferencia << endl;




    return 0;
}