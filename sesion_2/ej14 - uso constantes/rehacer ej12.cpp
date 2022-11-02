#include <iostream>
#include <cmath>

using namespace std;

int main(){

    double inicial;
    const int desc1 = 4;
    const int desc2 = 2;
    double fin_desc1;
    double fin_desc2;

    cout << "Introduzca el precio inicial del billete: ";
    cin >> inicial;

    fin_desc1 = inicial - inicial*(desc1/100.0);
    fin_desc2 = inicial - inicial* (desc2/100.0);

    cout << "\nEl precio final al aplicar el descuento de puntos de cliente es " << fin_desc1 << " euros";
    cout << "\ny tras aplicar el descuento por trayectos largos, se queda en " << fin_desc2 << " euros." << endl;

}
