#include <iostream>
#include <stdio.h>

using namespace std;

class Hello{
    public:
        void mensagem()
        {
            cout << "Olá 2022!\n";
        }
};


int main()
{
    Hello myHello;
    myHello.mensagem();
    return 0;
}