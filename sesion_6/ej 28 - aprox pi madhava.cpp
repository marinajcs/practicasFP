#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int tope;
    const int TOPE_MAX = 1e5;

    do{
        cout << "Introduzca un valor tope: ";
        cin >> tope;
    }while (tope < 1 || tope > TOPE_MAX);

    double numer, denom, pi_aprox;
    double frac = sqrt(3);
    int signo = -1;
    double suma = 0;

    for (int i = 0; i < tope; i++){
        signo = signo * -1;
        denom = 2*i + 1;
        frac = frac * 1/3;
        numer = signo * frac;
        suma = suma + (numer/denom);
    }

    pi_aprox = 6 * suma;

    cout.precision(15);
    cout << "\nEl valor aproximado de pi (por Wallis) es: " << pi_aprox << endl;
}
