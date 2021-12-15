#include <iostream>

using namespace std;

int main()
{
    int kelvin;
    double celsius;

    cout << "Converta a temperatura em Kelvin para Celsius:\n";
    cout << "------------------------------------------------\n";
    
    cout << "Insira a temperatura em Kelvin: ";
    cin >> kelvin;

    celsius = kelvin - 273.15;

    cout << "A temperatura em Kelvin: " << kelvin << endl;
    cout << "A temperatura em Celsius: " << celsius << endl;
    return 0; 
}