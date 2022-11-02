#include <iostream>
#include <string>
//#include <limits>
using namespace std;

int LeeIntRango(int Min, int Max, string msj){
    int a_leer;

    do{
        cout << msj;
        cin >> a_leer;
    }while (a_leer < Min || a_leer > Max);

    return a_leer;
}

int LeeIntMayorIgual(int Min, string msj){
    int a_leer;

    /*Alternativa: reutilizando la función LeeIntRango con
    métodos de programación que no hemos visto todavía:
    LeeIntRango(Min, numeric_limits<int>::max, msj)
    */

    do{
        cout << msj;
        cin >> a_leer;
    }while (a_leer < Min);

    return a_leer;
}

int main(){
    int min_, max_;
    int n;

    cout << "Introduzca un valor entero min: ";
    cin >> min_;

    max_ = LeeIntMayorIgual(min_, "Introduzca un valor entero max: ");

    n = LeeIntRango(min_, max_, "Introduzca un valor entero n en rango: ");

    cout << "\nValor n que está en rango: " << n << endl;
}
