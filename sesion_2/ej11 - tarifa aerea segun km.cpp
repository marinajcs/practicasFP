#include <iostream>

using namespace std;

int main(){

    const double tarifa_base = 150.0;
    const double tarifa_km = 0.10;
    double dist_km;
    double total;

    cout << "Introduzca la distancia en kilometros hasta el destino: ";
    cin >> km;

    total = tarifa_base + tarifa_km * dist_km;

    cout << "\nEl precio total del billete es: " << total << " euros." << endl;

}
