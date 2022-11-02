#include <iostream>
using namespace std;

int main(){
    int dato, introd;
    const int TERM = 0;

    cout << "Introduzca un dato: ";
    cin >> dato;

    int minimo = dato;

    while(dato != TERM){
        introd++;

        if (dato < minimo)
            minimo = dato;

        cout << "Introduzca un dato: ";
        cin >> dato;
    }

    cout << "\n\nNumeros de datos introducidos: " << introd;
    cout << "\nMinimo: " << minimo << endl;
}
