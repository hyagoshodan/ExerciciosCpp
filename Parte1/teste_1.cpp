#include <iostream>

using namespace std;

int main()
{
    double divisao_double = 10 / 3;
    float divisao_float = 10 / 3;
    double tres = 3;
    double dez = 10;


    cout    << "Os valores das divisões são: \n"
            << divisao_double << " Double" << endl 
            << divisao_float  << " Float"  << endl
            
            << 10 / 3 << endl;

    
    
    divisao_float = dez / tres;
    cout << divisao_float << endl;
    
    divisao_double = dez / tres;
    cout << divisao_double << endl;




    float tres_float = 3;
    float dez_float = 10;

    double tres_double = 3;
    double dez_double = 10;

    divisao_double = dez_double / tres_double;
    divisao_float = dez_float / tres_float;
    
    cout << divisao_double << endl;
    cout << divisao_float << endl;        

    return 0;
}