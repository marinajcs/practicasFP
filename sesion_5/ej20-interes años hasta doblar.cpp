#include <iostream>
using namespace std;

int main(){

    double interes, cap_ini;

    cout << "Interes bancario\n\nIntroduzca capital inicial --> ";
    cin >> cap_ini;
    cout << "Introduzca interes --> ";
    cin >> interes;

    int anios = 0;
    double capital = cap_ini;

    while (capital <= 2 * cap_ini){
        capital = capital + capital * interes/100.0;
        anios++;
    }
    double cap_fin = capital;

    cout << "\nPara doblar la cantidad inicial deben pasar " << anios << " anios.";
    cout << "\nAl finalizar, se obtendra un total de " << cap_fin << " euros." << endl;
}
