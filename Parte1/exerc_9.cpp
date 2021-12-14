#include <iostream>

using namespace std;

int main()
{
    int numero = 57;
    cout << "Exibir a operação de pré e pós incremento e decremento:\n";
    cout << "--------------------------------------------------------------------\n";
    cout << "O número é: " << numero << endl;

    numero++;
    cout << "Depois do pós-incremento por 1 o número é: " << numero << endl;
    
    ++numero;
    cout << "Depois do pré-incremento por 1 o número é: " << numero << endl;

    numero += 1;
    cout << "Depois do acréscimo por 1 o número é: " << numero << endl;

    numero--;
    cout << "Depois do pós-decremento por 1 o número é: " << numero << endl;

    --numero;
    cout << "Depois do pré-decremento por 1 o número é: " << numero << endl;

    numero -= 1;
    cout << "Depois do decréscimo por 1 o número é: " << numero << endl;

    return 0;

}