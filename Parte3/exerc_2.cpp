#include <iostream>

using namespace std;

int main()
{

    int total = 0;
    int contagem = 1;

    cout << "Os números naturais são:" << endl;
    cout << "----------------------------------------" << endl;
    
        while( contagem <= 10 )
        { 
            total = contagem + total;
            cout << contagem << " ";
            contagem = contagem + 1;  
        }    

    cout << "\nA soma dos 10 primeiros números naturais: " << total;

    return 0;
}
