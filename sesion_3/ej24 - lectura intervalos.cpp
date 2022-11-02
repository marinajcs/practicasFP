#include <iostream>

using namespace std;

int main(){

    char ext_izq;
    double a;
    const char separ = ',';
    double b;
    char ext_dch;

    cout << "Introduzca el tipo de extremo izquierdo del intervalo: ";
    cin >> ext_izq;
    cout << "Introduzca el valor de la cota inferior: ";
    cin >> a;
    cout << "Introduzca el valor de la cota superior: ";
    cin >> b;
    cout << "Introduzca el tipo de extremo derecho del intervalo: ";
    cin >> ext_dch;

    cout << "\nEl intervalo es: " << ext_izq << a << separ << b << ext_dch;

}
