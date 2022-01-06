#include <iostream>

/*      CONVERSÃO DE TEMPERATURA 
    Escala Celsius:     0 -> 100
    Escala Fahrenheit:  32 -> 212

    C     F - 32  
   --- = --------
    5       9
*/

using namespace std;

int main()
{
    double celsius;
    double fahrenheit;

    cout << "Escreva um programa em C ++ para converter a temperatura em Celsius em Fahrenheit.\n"
         << "Exemplo de saída:\n"
         << "Converta a temperatura em Fahrenheit para Celcius:\n"
         << "---------------------------------------------------\n"
         << "Insira a temperatura em Fahrenheit: ";
    cin >> fahrenheit;

    // Cálculos
    celsius = ( fahrenheit - 32 ) * 5 / 9;

    cout << "A temperatura em Fahrenheit: " << fahrenheit << endl;
    cout << "A temperatura em Celsius: " << celsius << endl;

    return 0;    

}