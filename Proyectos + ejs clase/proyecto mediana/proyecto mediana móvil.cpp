/**
  * @file mediana_movil.cpp
  * @brief Calcula la mediana movil de una secuencia de temperaturas
  *
  * @author Marina J. Carranza & Pedro Palacín (Grupo 48)
  * @date Diciembre-2020
*/

#include <iostream>
using namespace std;

int main(){
    const double CERO_ABS = -273.15;
    const int MAX_TAM_VEC = 10000;
    double temp[MAX_TAM_VEC];
    int util_temp, util_mediana;
    double dato, CENT, aux_temp;
    const int N = 5;

    cout << "-------------CÁLCULO MEDIANA MÓVIL--------------" << endl;
    cout << "Introducir secuencia de temperaturas, con";
    cout << "\ncentinela: menor que -273.15 grados." << endl;

    cin >> dato;

    int i = 0;

    while(i < MAX_TAM_VEC && dato > CERO_ABS){
        temp[i] = dato;
        i++;
        cin >> dato;
    }

    util_temp = i;
    CENT = dato;
    util_mediana = util_temp - (N - 1);

    // Se ordena mediante el método burbuja:

    for (int j = 0; j < i - 1; j++)
        for (int k = 0; k < i - 1; k++){
            if (temp[k] > temp[k+1]){
                aux_temp = temp[k];
                temp[k] = temp[k+1];
                temp[k+1] = aux_temp;
            }
        }

    cout << endl << endl;

    double suma, mediana;
    int num_medio = N/2;

    if(N % 2 == 0){
        for(int k = 0; k < util_mediana; k++){
            suma = temp[num_medio - 1 + k] + temp[num_medio + k];
            mediana = suma / 2;

            cout << mediana << " ";
        }
    }else{
        for(int k = 0; k < util_mediana; k++){
            mediana = temp[num_medio + k];

            cout << mediana << " ";
        }
    }

    cout << CENT << endl;
}
