#include <iostream>

using namespace std;

int main(){

    const double trfa_base = 150.0;
    const double trfa_km = 0.10;
    const double umbral_km = 300.0;
    double trfa_fin, dist_km, recarg_km;

    cout << "Introduzca la distancia en kilometros hasta el destino: ";
    cin >> dist_km;

    recarg_km = (dist_km - umbral_km) * trfa_km;

    if (dist_km > umbral_km)
        trfa_fin = trfa_base + recarg_km;
    else
        trfa_fin = trfa_base;

    cout << "\nEl precio total del billete es: " << trfa_fin << " euros." << endl;

}
