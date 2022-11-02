/*@Marina J. Carranza
Ejercicio 3.9 [CODIFICACIÓN]
Escriba un programa que realiza la codificación RLE para una secuencia de
números reales que corresponden a temperaturas.
Tenga en cuenta que los datos de entrada terminarán cuando se introduce una
temperatura menor que el cero absoluto (−273.15 grados centígrados).
El resultado del programa será una secuencia de pares de la forma:
<frecuencia><dato> que termina en un último valor 0 que corresponde a un
centinela para marcar que no hay más datos.
EJEMPLO
    Entrada: 2 2 2 2 2 3 3 3 5 -300
    Salida: 5 2 3 3 1 5 0
*/

#include <iostream>
using namespace std;

int main(){
    const double CERO_ABS = -273.15;
    const int CENT = 0;
    double dato, dato_ant;
    int frec = 0;

    cout << "----------PROYECTO BUCLES: COMPRIMIR SECUENCIA DE TEMPERATURAS----------" << endl;
    cout << "\nSecuencia de datos de temperatura:" << endl;
    cin >> dato;

    dato_ant = dato; // Se almacenará el dato en una variable auxiliar (dato anterior)

    while(dato >= CERO_ABS){
        while (dato == dato_ant){
            frec++;
            cin >> dato;
        }
        cout << "\nFrecuencia: " << frec << " Dato: " << dato_ant << endl << endl;
        frec = 1;
        dato_ant = dato;
        cin >> dato;

        if (dato < CERO_ABS)   // <- Para contar el último dato válido previo al terminador.
            cout << "\nFrecuencia: " << frec << " Dato: " << dato_ant << endl;
    }
    cout << endl << CENT << endl;
}
