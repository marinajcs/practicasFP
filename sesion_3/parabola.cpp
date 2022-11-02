#include <iostream>
#include <cmath>

using namespace std;

int main(){

   double v0, tv, ang0, ymax, xmax;
   const double g = 9.80665;
   const double PI = 6 * asin(0.5);

    cout << "Introduzca la velocidad de lanzamiento (m/s): ";
    cin >> v0;
    cout << "Introduzca el angulo de lanzamiento en grados (0-90): ";
    cin >> ang0;

    ang0 = (PI / 180) * ang0;
    const double vy = v0 * sin(ang0);
    const double vx = v0 * cos(ang0);

    tv = (2 * vy) / g;
    ymax = pow(vy, 2) / (2*g);
    xmax = vx * tv;

    cout << "\nEl tiempo de vuelo es: " << tv << " s." << endl;
    cout << "La altura maxima es: " << ymax << " m." << endl;
    cout << "El alcance del proyectil es: " << xmax << " m." << endl;

}
