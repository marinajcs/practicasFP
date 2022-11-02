#include <iostream>
#include <cmath>

using namespace std;

int main (){

    double num;
    double cifradec;
    double num_red;

    cout << "Introduzca un numero real: ";
    cin >> num;
    cout << "Posicion de cifra decimal: ";
    cin >> cifradec;

    num_red = round(num * pow(10, cifradec)) / pow(10, cifradec);

    /* Ejemplo de proceso: 78.985 -> 78.985*100=7898.5
    redondeado es 7899. Luego se divide por 100 -> 78.99 */

    cout << "\nEl numero redondeado a la cifra decimal de posicion " << cifradec << " es: " << num_red << endl;

}
