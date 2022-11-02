#include <iostream>

using namespace std;

int main(){

    int edad; //La edad no es un valor estático, por tanto no se puede declarar la edad actual como tal.
    int anio_nacim, anio_actual;
    edad = anio_actual - anio_nacim;

    cout << "Introduzca su anio de nacimiento: ";
    cin >> anio_nacim;
    cout << "Introduzca el anio actual: ";
    cin >> anio_actual;
    cout << "\nSu edad actual es: " << edad << " años." << endl;


    long long int PIB; // No se usa double para evitar fallos de precisión. Suelen tener unas 13-14 cifras.

    cout << "Introduzca el PIB nominal de un pais: ";
    cin >> PIB;
    cout << "\nEl valor del PIB de dicho pais es de: " << PIB << " USD" << endl;

    bool es_primo; //Solo dos opciones, el numero es primo o no
    int num;

    es_primo = num... //Si solo es divisible por sí mismo y por 1. Por ejemplo, el 7.
    cout << es_primo << endl; // Recordar: 0 (false), 1 (true).

    enum est_civil {casado,soltero,separado,divorciado,viudo};

    //Se usará una enumeración que será estudiada posteriormente.

    bool es_mujer; // Ya que tenemos solo dos opciones (es mujer, por tanto no es hombre y viceversa)


}
