#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
 /*                 Primeira tentativa - errada.
  *  cout << "\nExibir operações aritméticas com tipos de dados mistos:\n";
  *  cout << "---------------------------------------------------------\n";
  *  cout << "5 + 7 = "      << 5 + 7        << endl;
  *  cout << "3.7 + 8.0 = "  << 3.7 + 8.0    << endl;
  *  cout << "5 + 8.0 = "    << 5 + 8.0      << endl;
  *
  *  cout << "5 - 7 = "      << 5 - 7        << endl;
  *  cout << "3.7 - 8.0 = "  << 3.7 - 8.0    << endl;
  *  cout << "5 - 8.0 = "    << 5 - 8.0      << endl;
  *
  *  cout << "5 * 7 = "      << 5 * 7        << endl;
  *  cout << "3.7 * 8.0 = "  << 3.7 * 8.0    << endl;
  *  cout << "5 * 8.0 = "    << 5 * 8.0      << endl;
  *
  *  cout << "5 / 7 = "      << 5 / 7        << endl;
  *  cout << "3.7 / 8.0 = "  << 3.7 / 8.0    << endl;
  *  cout << "5 / 8.0 = "    << 5 / 8.0      << endl;
  */

    float oito = 8.0;
    float tres_sete = 3.7;
    int sete = 7;
    int cinco = 5;


    cout << "\nExibir operações aritméticas com tipos de dados mistos:\n";
    cout << "---------------------------------------------------------\n";
    cout << cinco      << " + " << sete << " = " << cinco + sete      << endl;
    cout << tres_sete  << " + " << oito << " = " << tres_sete + oito  << endl;
    cout << cinco      << " + " << oito << " = " << cinco + oito      << endl;
    
    cout << cinco      << " - " << sete << " = " << cinco - oito      << endl;
    cout << tres_sete  << " - " << oito << " = " << tres_sete - oito  << endl;
    cout << cinco      << " - " << oito << " = " << cinco - oito      << endl;

    cout << cinco      << " * " << sete << " = " << cinco * sete      << endl;
    cout << tres_sete  << " * " << oito << " = " << tres_sete * oito  << endl;
    cout << cinco      << " * " << oito << " = " << cinco * oito      << endl;

    cout << cinco      << " / " << sete << " = " << cinco / sete      << endl;
    cout << tres_sete  << " / " << oito << " = " << tres_sete / oito  << endl;
    cout << cinco      << " / " << oito << " = " << cinco / oito      << endl;
    
    return 0;
}