#include <iostream>
#include <cmath>

using namespace std;

int main(){

    double x0, y0, v0, ang0, rotP;
    const double G = 9.80665;
    const double PI = 6 * asin(0.5);

    cout << "Introduzca dos valores con la posicion del canion: \n";
    cin >> x0 >> y0;
    cout << "Introduzca la velocidad de lanzamiento (m/s): ";
    cin >> v0;

    if (v0 < 0)
        cout << "\nError: v0 debe ser positiva." << endl;
    else{
        cout << "Introduzca el angulo de elevacion en grados: ";
        cin >> ang0;

        if (ang0 <= 0 || ang0 >= 90)
            cout << "\nError: el angulo de elevacion debe estar en el intervalo (0,90) grados" << endl;
        else{
            cout << "Introduzca angulo de rotacion: ";
            cin >> rotP;

            if (rotP > 180){
                if (rotP >= 360){
                    int vueltas = trunc(rotP / 360);
                    rotP = rotP - 360 * vueltas;
                }else
                    rotP = rotP - 360;

                cout << "Angulo de rotacion rectificado: " << rotP;

            }else if (rotP < -180){
                if (rotP <= -360){
                    int vueltas = abs(trunc(rotP / 360));
                    rotP = rotP + 360 * vueltas;
                }else
                    rotP = rotP + 360;

                cout << "Angulo de rotacion rectificado: " << rotP;
            }

            const double GR2RAD = PI / 180;

            ang0 = GR2RAD * ang0;
            rotP = GR2RAD * rotP;

            double tv, ymax, xmax, xf, yf;
            const double vy = v0 * sin(ang0);
            const double vx = v0 * cos(ang0);

            tv = (2 * vy) / g;
            ymax = pow(vy, 2) / (2*g);
            xmax = vx * tv;
            xf = x0 + xmax * sin(rotP);
            yf = y0 + xmax * cos(rotP);

            cout << "\n--------RESULTADO DEL DISPARO---------" << endl;
            cout << "El tiempo de vuelo es: " << tv << " s." << endl;
            cout << "La altura maxima es: " << ymax << " m." << endl;
            cout << "El alcance del proyectil es: " << xmax << " m." << endl;
            cout << "El impacto es: (" << xf << "," << yf << ") m." << endl;

            double xt, yt;

            cout << "\n-------COMPROBACION DE OBJETIVO-------" << endl;
            cout << "Introduzca localizacion del objetivo: " << endl;
            cin >> xt >> yt;

            double d0, d1;

            cout << "Introduzca distancias de impacto: " << endl;
            cin >> d0 >> d1;

            if (d0 < 0 || d1 < 0)
                cout << "\nError: distancias de impacto no pueden ser negativas." << endl;
            else{
                double dist_obj;
                double dist_x = xf - xt;
                double dist_y = yf - yt;

                dist_obj = sqrt(dist_x * dist_x + dist_y * dist_y);

                string exito;
                double min_d = min(d0,d1);
                double max_d = max(d0,d1);

                if (d0 > d1){
                    double tmp = d0;
                    d0 = d1;
                    d1 = tmp;
                }

                if (dist_obj < d0)
                    exito = "impacto directo.";
                else if (d0 <= dist_obj && dist_obj <= d1)
                    exito = "impacto parcial.";
                else if (dist_obj > d1)
                    exito = "no hay impacto.";

                cout << "\nDistancia al objetivo: " << dist_obj << " m -> " << exito << endl;
            }
        }
    }
}
