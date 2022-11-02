#include <iostream>
#include <cmath>

using namespace std;

int main(){

    double real;
    int n;

    cout << "Introduzca un numero real: ";
    cin >> real;
    cout << "Introduzca el numero de cifras decimales que desea truncar: ";
    cin >> n;

    real = real * pow(10,n);
    real = trunc(real);
    real = real / pow(10,n);

    cout << "El numero real truncado es " << real;


}
