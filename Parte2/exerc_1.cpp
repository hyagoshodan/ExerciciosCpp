#include <iostream>

using namespace std;

int main()
{
   int numero1;
   int numero2;
   int numero3;
   int numero4;
   int numero5;
   int numero6;
   string vir;

   cout << "Digite os números por favor: \n";
   cin >> numero1 >> vir >> numero2;
   cin >> numero3 >> vir >> numero4;
   cin >> numero5 >> vir >> numero6;

   cout << "Saída: \n";
        if ( numero1 == numero2 )
        {
            cout << (numero1 + numero2) *( numero1 + numero2)
                    << endl;
        } else {
            cout << numero1 + numero2 << endl;
        }

        if ( numero3 == numero4 )
        {
            cout << (numero3 + numero4) * (numero3 + numero4)
                 << endl;
        } else {
            cout << numero3 + numero4 << endl;
        }

        if ( numero5 == numero6 )
        {
            cout << (numero5 + numero6) * (numero5 * numero6)
                 << endl;
        } else {
            cout << numero5 + numero6 << endl;
        }

    return 0;
}