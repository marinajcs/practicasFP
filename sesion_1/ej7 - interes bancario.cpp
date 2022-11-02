#include <iostream>

using namespace std;

int main(){

    double capital; //Cantidad de dinero € depositado en un año
    double interes; //porcentaje dentro de [0,100]
    double total;

    cout << "El valor del capital es: ";
    cin >> capital;
    cout << "El valor del interes dado es:  ";
    cin >> interes;

    total = capital + (capital * interes) / 100;

    /*
    Se podría sustituir la variable "total" por "capital" y el resultado
    no cambiaría; sin embargo, es mejor crear la variable total para diferenciar
    la cantidad de dinero inicial (capital) y la final tras añadir el interés.
    De esta forma, queda más claro que el capital por definición solo es la cantidad
    que se deposita al principio, sin ser modificada por el interes.
    */

    cout << "\nLa cantidad de dinero total es: " << total << " euros" << endl;


}
