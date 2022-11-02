#include <iostream>
#include <cmath>

using namespace std;

int main(){

    double esper;
    double desv;
    double x;
    double gauss;
    const double PI = 6 * asin(0.5);

    cout << "Introduzca el valor de la esperanza/media: ";
    cin >> esper;
    cout << "Introduzca el valor de la desviacion tipica: ";
    cin >> desv;
    cout << "Introduzca el valor de abscisa x: ";
    cin >> x;

    gauss = (1 / (desv * sqrt(2*PI))) * exp(-0.5 * pow((x-esper)/desv, 2));

    // Para e^3 se escribe exp(3). Recordar: pow(base, exp)

    cout << "\nEl valor que toma la funcion gaussiana en x es: " << gauss << endl;

}
