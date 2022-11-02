#include <iostream>

using namespace std;

int main()
{
    double vinicial;
    double vfinal;
    double var_porc;

    cout<< "Introduzca el valor inicial: ";
    cin >> vinicial;
    cout<< "Introduzca el valor final: ";
    cin >> vfinal;

    var_porc = abs(100 * (vfinal - vinicial) / vinicial);

    cout << "\nLa variacion porcentual del producto es: " << var_porc <<"%" << endl;

}
