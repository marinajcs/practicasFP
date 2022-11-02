#include <iostream>
#include <cmath>

using namespace std;

int main(){

    double esper, desv, minimo, maximo, increm;

    cout << "Introduzca el valor de la esperanza/media: ";
    cin >> esper;

    do {
        cout << "Introduzca el valor de la desviacion tipica: ";
        cin >> desv;
    }while (desv < 0);

    cout << "Introduzca el valor minimo: ";
    cin >> minimo;

    do {
        cout << "Introduzca el valor maximo: ";
        cin >> maximo;
    }while (maximo < minimo);

    do {
        cout << "Introduzca el valor del incremento: ";
        cin >> increm;
    }while (increm <= 0);

    const double PI = 6 * asin(0.5);
    double y, x;
    int contador = 0;

    x = minimo;

    while (x >= minimo && x < maximo){
        x = minimo + contador * increm;

        double val_tipificado = (x - esper) / desv;
        double exponente = -0.5 * val_tipificado * val_tipificado;
        y = exp(exponente) / (desv * sqrt(2*PI));

        cout << "\nFuncion gaussiana en " << x << " es: " << y << endl;
        ++contador;
    }

}
