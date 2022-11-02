#include <iostream>
using namespace std;

int main(){

    double interes, capital;
    int anios;

    cout << "Interes bancario\n\nIntroduzca capital inicial --> ";
    cin >> capital;
    cout << "Introduzca interes --> ";
    cin >> interes;
    cout << "Introduzca numero de anios --> ";
    cin >> anios;
    cout << "\n";

    for (int i = 1; i <= anios; i++){
        capital = capital + capital * interes/100.0;

        cout << "Capital obtenido transcurrido el anio numero " << i << " --> " << capital << endl;
    }

}
