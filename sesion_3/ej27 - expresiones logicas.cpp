#include <iostream>

using namespace std;

int main(){

    char letra, vocal;
    int edad, adivine, anio;
    double velocidad;

    cout << "Introduzca una letra, una edad, un numero cualquiera, un anio,";
    cout << "\nun valor de velocidad y un caracter cualquiera, sucesivamente: " << endl;
    cin >> letra >> edad >> adivine >> anio >> velocidad >> vocal;

    bool es_minus, men18_o_may65, entre1_100, es_bisiesto, may_ig_100, es_vocal;

    es_minus = 'a' <= letra && letra <= 'z';
    men18_o_may65 = edad < 18 || edad > 65;
    entre1_100 = 1 < adivine && adivine < 100;
    es_bisiesto = (anio % 4 == 0 && anio % 100 != 0) || anio % 400 == 0;
    may_ig_100 = 100 <= velocidad;
    es_vocal = vocal == 'a' || vocal == 'e' || vocal == 'i' || vocal == 'o' || vocal == 'u';

    cout << "\n" << es_minus << " " << men18_o_may65 << " " << entre1_100 << " " << es_bisiesto << " " << may_ig_100 << " " << es_vocal << endl;

}
