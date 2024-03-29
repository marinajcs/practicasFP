/*@file pascua.cpp
@brief Calcula la fecha del domingo de Pascua de un a�o

@author Marina
@date Octubre-2020
*/

#include <iostream>

using namespace std;

int main(){

    int anio;
    string mes;

    cout << "Introduzca el anio: ";
    cin >> anio;

    if (anio < 1900 || anio > 2100)
        cout << "\nEl anio esta fuera de rango" << endl;
    else {
        int A = anio % 19;
        int B = anio % 4;
        int C = anio % 7;
        int D = (19 * A + 24) % 30;
        int E = (2 * B + 4 * C + 6 * D + 5) % 7;
        int N = (22 + D + E);

        if (N > 31){
            mes = "abril";
            N = N - 31;
            if (N == 26)
                N = 19;
            else if (N == 25 && D == 28 && E == 6 && A > 10)
                N = 18;
        }else
            mes = "marzo";

    cout << "\nEn " << anio << ", Pascua se celebra el " << N << " de " << mes << endl;
    return 0;
    }
}
