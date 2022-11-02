#include <iostream>
#include <cmath>

using namespace std;

int main(){

    double num1_g;
    double num2_g;
    double num1_rad;
    double num2_rad;
    const double PI = 6 * asin(0.5);

    cout << "Introduzca un numero real expresado en grados: ";
    cin >> num1_g;
    cout << "Introduzca otro numero real expresados en grados: ";
    cin >> num2_g;

    num1_rad = num1_g * PI / 180;
    num2_rad = num2_g * PI / 180;

    cout << "\nLos numeros anteriores expresados en radianes son " << num1_rad << " y " << num2_rad << ", respectivamente." << endl;

}
