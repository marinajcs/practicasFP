/**
  * @file maratonistas.cpp
  * @brief Procesa tiempos de llegada y determina el ganador
  *
  * @author Marina J. Carranza
  * @date Noviembre-2020
  *
  * Suponga una serie de datos correspondientes al resultado de una marat�n. Los datos
  * consisten en varios valores por maratonista:
  *
  *    - N�mero de dorsal. Los dorsales de corredores son n�mero positivos.
  *    - Tiempo obtenido. El tiempo que ha necesitado para acabar la marat�n. Est� compuesto
  *      de dos valores: horas y minutos.
  *
  * Escriba un programa que lea los resultados de una carrera e indique qui�n es el ganador.
  * El formato de entrada de valores ser� un valor de dorsal m�s el tiempo que ha necesitado
  * para terminar. El tiempo se especifica con un formato horas:minutos (vea el ejemplo m�s
  * abajo).
  *
  * Una ejemplo de ejecuci�n es el siguiente:
  *      Introduzca los dorsales y tiempos correspondientes. Termine con el dorsal 0:
  *      5 1:37
  *      2 0:59
  *      9 1:04
  *      0
  *      N�mero de participantes: 3
  *      Primera posici�n corresponde al dorsal 2 con un tiempo de 0:59
  *
  * donde puede ver que los datos terminan cuando se introduce un dorsal de n�mero 0.
  * El resultado del programa corresponde a las dos �ltimas l�neas, donde aparece el n�mero
  * de participantes seguido por el dorsal ganador y el tiempo correspondiente.
  *
  * Debe tener en cuenta que tambi�n puede haber cero participantes; en este caso, el
  * programa responde como sigue:
  *
  *      Introduzca los dorsales y tiempos correspondientes. Termine con el dorsal 0:
  *      0
  *      N�mero de participantes: 0
  *      No hay ganador
  *
  */

#include <iostream>

using namespace std;

int main(){
    int dorsal, hor, min_;
    const int TERM = 0;
    char separ;
    int num_part = 0;

    cout << "Introduzca el numero del dorsal: ";
    cin >> dorsal;

    int hor_minim = 100;
    int min_minim = 100;
    int dors_ganador = dorsal;

    while(dorsal != TERM){
        cout << "Introduzca el tiempo (hor:seg): ";
        cin >> hor >> separ >> min_;
        cout << "\n";

        if (hor < hor_minim || (hor == hor_minim && min_ < min_minim)){
            hor_minim = hor;
            min_minim = min_;
            dors_ganador = dorsal;
        }

        num_part++;

        cout << "Introduzca el numero del dorsal: ";
        cin >> dorsal;
    }

    if (num_part == 0){
        cout << "\nNumero de participantes: " << num_part;
        cout << "\nNo hay ganador" << endl;
    }else{
        cout << "\nNumero de participantes: " << num_part;
        cout << "\nPrimera posicion corresponde al dorsal " << dors_ganador << ". Tiempo: " << hor_minim << separ << min_minim << endl;
    }

}
