#include <iostream>

using namespace std;

int main(){

    char tipo_rad;
    double vel_capt, vel_imp, mar_error;
    const double umbral_vel = 100.0;

    cout << "Introduzca el tipo de radar: ";
    cin >> tipo_rad;
    cout << "Introduzca la velocidad captada: ";
    cin >> vel_capt;

    bool rad_fijo = tipo_rad == 'f' || tipo_rad == 'F';
    double ind_var;

    if (vel_capt <= umbral_vel){
        if (rad_fijo)
            mar_error = 5;
        else
            mar_error = 7;

        vel_imp = vel_capt - mar_error;
    } else {
        if (rad_fijo)
            ind_var = 1 - 0.05;
        else
            ind_var = 1 - 0.07;

        vel_imp = vel_capt * ind_var;
    }

    cout << "\nLa velocidad imputada es: " << vel_imp << " km/h" << endl;
}
