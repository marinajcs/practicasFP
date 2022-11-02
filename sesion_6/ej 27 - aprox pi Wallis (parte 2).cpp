#include <iostream>
using namespace std;

int main(){
    int tope;
    const int TOPE_MAX = 1e5;

     do{
        cout << "Introduzca un valor tope: ";
        cin >> tope;
    }while (tope < 1 || tope > TOPE_MAX);

    /*Otra forma de implementar los cambios en el numerador y denominador
    es observando que en cada iteración, el numerador = denom de iteración anterior + 1
    y el denominador es el numerador de la iteración anterior + 1
    */

    double pi_aprox;
    double produc = 1;
    double numer = 2;
    double denom = 1;
    double num_ant;

    for (int i = 0; i < tope; i++){
        produc = produc * numer/denom;
        num_ant = numer;
        numer = denom + 1;
        denom = num_ant + 1;
    }

    pi_aprox = 2 * produc;

    cout.precision(15);
    cout << "\nEl valor aproximado de pi (por Wallis) es: " << pi_aprox << endl;
}
