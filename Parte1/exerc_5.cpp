#include <iostream>

using namespace std;

int main()
{
 
    /*                  Primeira tentativa - errada.
     *  cout << "\nO limite máximo do tipo de dados int: 2147483647\n"
     *       << "O limite mínimo do tipo de dados int: -2147483648\n"
     *       << "O limite máximo de tipo de dados int não assinado: 4294967295\n"
     *       << "O limite máximo de long tipo de dados long: 9223372036854775807\n"
     *       << "O limite mínimo do tipo de dados long long: -9223372036854775808\n"
     *       << "O limite máximo de tipo de dados long long unsigned: 18446744073709551615\n"
     *       << "Os bits contêm no tipo de dados char: 8\n"
     *       << "O limite máximo do tipo de dados char: 127\n"
     *       << "O limite mínimo do tipo de dados char: -128\n"
     *       << "O limite máximo do tipo de dados char assinado: 127\n"
     *       << "O limite mínimo do tipo de dados char assinado: -128\n"
     *       << "O limite máximo do tipo de dados unsigned char: 255\n"
     *       << "O limite mínimo do tipo de dados curtos: - 32768\n"
     *       << "O limite máximo do tipo de dados curtos: 32767\n"
     *       << "O limite máximo do tipo de dados curtos não assinados: 65535\n"
     *       << endl;
     */

    cout << "\n"
        << "O limite máximo do tipo de dados int:                   " << INT_MAX << endl
        << "O limite mínimo do tipo de dados int:                   " << INT_MIN << endl
        << "O limite máximo do tipo de dados int não assinado:      " << UINT_MAX << endl
        << "O limite máximo do tipo de dados long:                  " << LONG_MAX << endl
        << "O limite mínimo do tipo de dados long long:             " << LONG_LONG_MAX << endl
        << "O limite máximo de tipo de dados long long unsigned:    " << ULONG_LONG_MAX << endl
        << "Os bits contêm no tipo de dados char:                   " << CHAR_BIT << endl
        << "O limite máximo do tipo de dados char:                  " << CHAR_MAX << endl
        << "O limite mínimo do tipo de dados char:                  " << CHAR_MIN << endl
        << "O limite máximo do tipo de dados char assinado:         " << SCHAR_MAX << endl
        << "O limite mínimo do tipo de dados char assinado:         " << SCHAR_MIN << endl
        << "O limite máximo do tipo de dados unsigned char:         " << UCHAR_MAX << endl
        << "O limite mínimo do tipo de dados curtos:                " << SHRT_MIN << endl
        << "O limite máximo do tipo de dados curtos:                " << SHRT_MAX << endl
        << "O limite máximo do tipo de dados curtos não assinados:  " << USHRT_MAX << endl;

    return 0;
} 
