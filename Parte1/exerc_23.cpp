#include <iostream>

using namespace std;

int main()
{
    int quilometro;

    cout << "Converta quilômetros por hora em milhas por hora:" << endl;
    cout << "-------------------------------------------------" << endl;
    cout << "Insira a distância em quilômetros: ";
    cin >> quilometro;
    cout << "A " << quilometro << "km/h significa " << quilometro * 0.6214 
         << "mph\n" << endl;


    return 0;
}