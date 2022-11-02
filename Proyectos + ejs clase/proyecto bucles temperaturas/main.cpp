/*@Marina J. Carranza
Ejercicio 3.10.
Escriba un programa que realiza la decodificación RLE para una secuencia de pares
previamente codificados. Recuerde que cada par tiene la forma <frecuencia><dato>
y que la secuencia termina con un valor 0 como centinela.
El resultado del programa es la secuencia original que podría haber producido esa
codificación más un valor menor que el cero absoluto (−273.15) que marcaría el final de secuencia.
Además, el programa podrá terminar inesperadamente si detecta que la secuencia codificada
muestra algún signo de ser errónea. Para ello, debe comprobar que cualquier valor de frecuencia
es un entero positivo. Por ejemplo, si introducimos un grupo de datos sin codificar,
es probable que haya valores negativos o valores con decimales que no pueden corresponder a
una frecuencia.
Nota: Para comprobar si la frecuencia es errónea, lea el valor en una variable en coma flotante.
*/

#include <iostream>
using namespace std;

int main(){
    const int CENT = 0;
    float frec;
    double dato; //Ejemplo salida: 2 2 2 2 3 3 3 5

    cout << "----------PROYECTO BUCLES: COMPRIMIR SECUENCIA DE TEMPERATURAS----------" << endl;
    cout << "\nFrecuencia y dato. Centinela es 0:" << endl;
    cin >> frec;

    bool frec_int = frec == int(frec);
    bool frec_may1 = frec > 0;

    while(frec != CENT && frec_int && frec_may1){
        cin >> dato;
        cout << "\nSecuencia: " << endl;

        for (int i = 0; i < frec; i++)
            cout << dato << " ";

        cout << endl << endl;
        cin >> frec;

        /* He tenido que repetir código porque los valores de las variables bool
        no parecían asignarse dentro del bucle.*/

        frec_int = frec == int(frec);
        frec_may1 = frec > 0;
    }

    if (!frec_int)
        cout << "\nError inesperado: frecuencia no entera." << endl;
    if (!frec_may1)
        cout << "\nError inesperado: frecuencia negativa." << endl;
}
