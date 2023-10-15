/**
  * @file media_movil.cpp
  * @brief Calcula la media movil de una secuencia de temperaturas
  *
  * @author Marina J. Carranza
  * @date Diciembre-2020
*/

#include <iostream>
using namespace std;

int main(){
    const double CERO_ABS = -273.15;
    const int MAX_TAM_VEC = 10000;
    double temp[MAX_TAM_VEC];
    int util_temp, util_media;
    double dato, CENT;
    const int N = 3;

    cout << "-------------CÁLCULO MEDIA MÓVIL--------------" << endl;
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
    util_media = util_temp - (N - 1);

    double suma, media, num_sum;
    int j = 0;

    while(j < util_media){
        suma = 0;
        num_sum = 0;

        for(int k = j ; num_sum < N; k++){
            suma = suma + temp[k];
            num_sum++;
        }

        media = suma / N;
        cout << media << " "; // Otra forma: almacenar en vector <media>

        j++;
    }

    cout << CENT << endl;
}
