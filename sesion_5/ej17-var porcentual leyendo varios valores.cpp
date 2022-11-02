#include <iostream>
using namespace std;

int main(){

    double vinicial, vfinal, var_porc;

    cout<< "Introduzca el valor inicial: ";
    cin >> vinicial;

    while (vinicial >= 0){
        cout<< "Introduzca el valor final: ";
        cin >> vfinal;
        var_porc = abs(100 * (vfinal - vinicial) / vinicial);
        cout << "\nLa variacion porcentual del producto es: " << var_porc <<"%.\n";
        cout << "\n----------------\n\nIntroduzca el valor inicial: ";
        cin >> vinicial;
    }
}
