#include <iostream>
using namespace std;

int main(){
    int tope;
    const int TOPE_MAX = 1e5;

     do{
        cout << "Introduzca un valor tope: ";
        cin >> tope;
    }while (tope < 1 || tope > TOPE_MAX);

    /*De la primera forma: Observe que el numerador y el denominador varían de forma alternativa (aunque
    ambos de la misma forma, a saltos de 2). Cuando a uno le toca cambiar, el otro
    permanece igual. Este comportamiento se puede controlar con una única variable de tipo de dato bool.
    */

    double pi_aprox;
    double numer = 2;
    double denom = 1;
    double produc = 1;
    bool numer_camb = false;

    for (int i = 1; i <= tope; i++){
        produc = produc * numer/denom;

        if (numer_camb){
            numer = numer + 2;
            numer_camb = false;
        }else{
            denom = denom + 2;
            numer_camb = true;
        }
    }

    pi_aprox = 2.0 * produc;

    cout.precision(15);
    cout << "\nEl valor aproximado de pi (por Wallis) es: " << pi_aprox << endl;
}
