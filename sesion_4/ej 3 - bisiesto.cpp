#include <iostream>

using namespace std;

int main(){

    int anio;
    bool es_bisiesto;

    cout << "Introduzca un anio: ";
    cin >> anio;

    es_bisiesto = (anio % 4 == 0 && anio % 100 != 0) || anio % 400 == 0;

    if (es_bisiesto)
        cout << "\n" << anio << " es bisiesto";
    else
        cout << "\n" << anio << " no es bisiesto";

}
