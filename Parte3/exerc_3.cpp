#include <iostream>

using namespace std;

int main()
{
    int numero;
    int total = 0;
    int contagem = 1;

    cout << "Insira um termo: " << endl;
    cin >> numero;
    
    cout << "Os números naturais até o " << numero <<"º termo são:\n";

        while( contagem <= numero )
        { 
            total = contagem + total;
            cout << contagem << " ";
            contagem = contagem + 1;  
        }    
    
    cout << "\nA soma dos números naturais é: " << total;

    return 0;
}
