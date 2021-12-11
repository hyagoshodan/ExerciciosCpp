#include <iostream>

using namespace std;

int main()
{
    cout << "\nEncontre o tamanho dos tipos de dados fundamentais:\n";
    cout << "------------------------------------------\n";
    cout << "O sizeof (char) é: " << sizeof(char) << " bytes\n";
    cout << "O sizeof (short) é: " << sizeof(short) << " bytes\n";
    cout << "O sizeof (int) é: " << sizeof(int) << " bytes\n";
    cout << "O sizeof (long) é: " << sizeof(long) << " bytes\n";
    cout << "O sizeof (long long) é: " << sizeof(long long) << " bytes\n";
    cout << "O sizeof (float) é: " << sizeof(float) << " bytes\n";
    cout << "O sizeof (double) é: " << sizeof(double) << " bytes\n";
    cout << "O sizeof (long double) é: " << sizeof(long double) << " bytes\n";
    cout << "O sizeof (bool) é: " << sizeof(bool) << " bytes\n\n";
    return 0;
}