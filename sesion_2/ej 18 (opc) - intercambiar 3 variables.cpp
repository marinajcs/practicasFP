#include <iostream>

using namespace std;

int main(){

    int x;
    int y;
    int z;
    int copiaz;

    cout << "Introduzca el valor de x: ";
    cin >> x;
    cout << "Introduzca el valor de y: ";
    cin >> y;
    cout << "Introduzca el valor de z: ";
    cin >> z;

    copiaz = z;
    z = y;
    y = x;
    x = copiaz;

    cout << "\nEl valor de x es: " << x << endl;
    cout << "El valor de y es: " << y << endl;
    cout << "El valor de z es: " << z << endl;

}
