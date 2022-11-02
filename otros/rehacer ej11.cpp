#include <iostream>
#include <cmath>

using namespace std;

int main(){

    const int tarifa_base = 150;
    double km;
    double total;

    cout << "Introduzca la distancia en kilometros hasta el destino: ";
    cin >> km;

    total = tarifa_base + 0.10*km;

    cout << "\nEl precio total del billete es: " << total << " euros." << endl;

}
