#include <iostream>

using namespace std;

int main(){

    const double trfa_base = 150.0;
    const double trfa_1km = 0.10;
    const double umbral_km = 300.0;
    double trfa, dist_km, recarg_km, pts;

    cout << "Introduzca la distancia en kilometros hasta el destino: ";
    cin >> dist_km;
    cout << "Introduzca el numero de puntos de cliente: ";
    cin >> pts;

    recarg_km = (dist_km - umbral_km) * trfa_1km;

    if (dist_km > umbral_km)
        trfa = trfa_base + recarg_km;
    else
        trfa = trfa_base;

    cout << "El precio del billete sin aplicar descuentos es: " << trfa << " euros" << endl;
    double desc = 0;

    if (pts > 200.0)
        desc = 4;
    else if (pts > 100.0)
        desc = 3;

    if (dist_km > 700.0)
        desc = desc + 2;

    trfa = trfa * (1 - desc / 100);

    cout << "\nEl precio final del billete tras aplicar los descuentos es: " << trfa << " euros." << endl;

}
