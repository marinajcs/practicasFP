// Frecuencias

#include <iostream>
using namespace std;

int main(){
    const char TERMINADOR = '@';
    const int NUM_CARACT_ASCII = 256;
    const int MAX_NUM_CARACT = 1e4;

    char a_buscar[NUM_CARACT_ASCII];
    int frecuencias[NUM_CARACT_ASCII];
    char texto[MAX_NUM_CARACT];

    char car;
    int util_a_buscar, util_texto;

    cout << "Frecuencias\n"
         << "Introduzca los caracteres del vector a buscar, con terminador "
         << TERMINADOR << "\n"
         << "A continuación introduzca  los caracteres del texto,"
         << " usando el mismo terminador.\n\n";

    // Lectura

    car = cin.get();
    util_a_buscar = 0;

    while (car != TERMINADOR && util_a_buscar < NUM_CARACT_ASCII){
        a_buscar[util_a_buscar] = car;
        car = cin.get();
        util_a_buscar++;
    }

    car = cin.get();
    util_texto = 0;

    while (car != TERMINADOR && util_texto < MAX_NUM_CARACT){
        texto[util_texto] = car;
        car = cin.get();
        util_texto++;
    }

    //SOLUCIÓN 1

    /*Se cuenta las veces que aparece cada caracter en el texto,
    incluso los que no aparecen en 'a_buscar'.

    Algoritmo:
    1) Se recorre <texto> y se va actualizando la frecuencia
       de cada caracter en <frecuencias>
    2) Se recorre <a_buscar> y se va imprimiendo el valor de
       la frecuencia almacenado en <frecuencias> que corresponde
       a cada carácter
    *(/

    for (int i = 0; i < util_texto; i++){
        car = texto[i];
        int num_car = car;
        frecuencias[num_car]++;
    }

    for (int j = 0; j < util_a_buscar; j++){
        int num_car_util = a_buscar[j];
        int frec = frecuencias[num_car_util];
        cout << a_buscar[j] << ": " << frec << endl;
    }

    */

    //Solución 2:

    /*Por cada carácter del texto, se comprueba si es uno de los
    que estamos buscando.

    Algoritmo:
    1) Con una secuencia de dos bucles for anidados:
        - El primero recorre <texto>
        - Por cada caracter de <texto>, un segundo bucle recorre
          <a_buscar>
    2) Por cada vez que coinciden los valores de ambos vectores,
       se incrementa la frecuencia
    */

    for (int i = 0; i < util_texto; i++){
        for (int j = 0; j < util_a_buscar; j++){
            if (texto[i] == a_buscar[j])
                frecuencias[i]++;
        }
    }

    for (int k = 0; k < util_a_buscar; k++){
        cout << a_buscar[k] << ": " << frecuencias[k];
    }
}
