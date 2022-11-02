#include <iostream>
using namespace std;

int main(){
    int tope;
    const int TOPE_MAX = 1e5;

     do{
        cout << "Introduzca un valor tope: ";
        cin >> tope;
    }while (tope < 0 || tope > TOPE_MAX);

    cout << "\n\n------APARTADO B-------\n\n";

    //B) Para cada valor de i, se calcula (−1)^i con un bucle.

    double suma = 0;
    double denom, pi_aprox;
    double poten = -1;

    for (int i = 0; i <= tope; i++){
        for (int j = 0; j <= tope; j++)
            poten = poten * -1;

        denom = 2*i + 1;
        suma = suma + (poten/denom);
    }

    pi_aprox = 4 * suma;

    cout.precision(15);
    cout << "\nEl valor aproximado de de pi es: " << pi_aprox << endl;

    cout << "\n\n------APARTADO C-------\n\n";

    /*C) De una forma más eficiente que las anteriores.
    Por ejemplo, observe que el valor de (−1)^i es 1
    para los valores pares de i y −1 para los impares
    */

    double suma = 0;
    double denom, pi_aprox, poten;

    for (int i = 0; i <= tope; i++){
        if (i % 2 == 0)
            poten = 1.0;
        else
            poten = -1.0;

        denom = 2*i + 1;
        suma = suma + poten/denom;
    }

    pi_aprox = 4 * suma;

    cout.precision(15);
    cout << "\nEl valor aproximado de de pi es: " << pi_aprox << endl;

}
