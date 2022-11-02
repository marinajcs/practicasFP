#include <iostream>

using namespace std;

int main(){

    double capital; //Cantidad de dinero � depositado en un a�o
    double interes; //porcentaje dentro de [0,100]
    double total;

    cout << "El valor del capital es: ";
    cin >> capital;
    cout << "El valor del interes dado es:  ";
    cin >> interes;

    total = capital + (capital * interes) / 100;

    /*
    Se podr�a sustituir la variable "total" por "capital" y el resultado
    no cambiar�a; sin embargo, es mejor crear la variable total para diferenciar
    la cantidad de dinero inicial (capital) y la final tras a�adir el inter�s.
    De esta forma, queda m�s claro que el capital por definici�n solo es la cantidad
    que se deposita al principio, sin ser modificada por el interes.
    */

    cout << "\nLa cantidad de dinero total es: " << total << " euros" << endl;


}
