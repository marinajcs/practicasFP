#include <iostream>

using namespace std;

int main(){

    int hora1; //Recordar: 0-23h, 0-59min y s
    int min1;
    int seg1;
    int hora2;
    int min2;
    int seg2;
    int totalseg;

    cout << "Introduzca la hora del instante inicial: ";
    cin >> hora1;
    cout << "Introduzca el minuto del instante inicial: ";
    cin >> min1;
    cout << "Introduzca el segundo del instante inicial: ";
    cin >> seg1;
    cout << "Introduzca la hora del instante final: ";
    cin >> hora2;
    cout << "Introduzca el minuto del instante final: ";
    cin >> min2;
    cout << "Introduzca el segundo del instante final: ";
    cin >> seg2;

    int difhora = hora2 - hora1; //Para evitar escribir variables anteriores repetidas veces
    int difmin = min2 - min1;
    int difseg = seg2 - seg1;
    const int min_1hora = 60;
    const int seg_1min = 60;
    const int seg_1hora = min_1hora * seg_1min;

    totalseg = difhora * seg_1hora + difmin * seg_1min + difseg;

    cout << "\nEl numero total de segundos entre ambos intervalos es " << totalseg << endl;

}
