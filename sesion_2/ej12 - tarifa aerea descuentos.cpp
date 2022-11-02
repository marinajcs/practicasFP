#include <iostream>

using namespace std;

int main(){

    double inicial;
    int desc_pts = 4;
    int desc_km = 2;
    double tarifa_pts;
    double tarifa_km;

    cout << "Introduzca el precio inicial del billete: ";
    cin >> inicial;

    tarifa_pts = inicial - inicial * (desc_pts/100.0);
    tarifa_km = inicial - inicial * (desc_km/100.0);

    cout << "\nEl precio final al aplicar el descuento de puntos de cliente es " << tarifa_pts << " euros";
    cout << "\ny tras aplicar el descuento por trayectos largos, se queda en " << tarifa_km << " euros." << endl;

}
