#include <iostream>

using namespace std;

int main(){

    char mayus, minusc;
    char A = 'A';
    char a = 'a';

    cout << "Introduzca un caracter (en mayuscula): ";
    cin >> mayus;

    /*Se crea una variable nueva: la diferencia de posiciones
    entre la mayúscula y la minúscula (tabla ASCII)*/

    int dif_pos = a - A;
    minusc = mayus + dif_pos;

    cout << "\nEl caracter en minuscula es: " << minusc;

}
