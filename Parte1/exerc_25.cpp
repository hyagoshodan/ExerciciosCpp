#include <iostream>

using namespace std;

int main()
{
    int kelvin;

    cout << "Converta a temperatura em Kelvin para Celsius:\n";
    cout << "------------------------------------------------\n";
    cout << "Insira a temperatura em Kelvin: ";
    cin >> kelvin;

    cout << "A temperatura em Kelvin: " << kelvin << endl;
    cout << "A temperatura em Celsius: " << kelvin - 273.15 << endl;
    return 0; 
}