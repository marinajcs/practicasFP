#include <iostream>
#include <cmath>

using namespace std;

int main(){

    int num_ini;

    cout << "Introduzca un numero entero positivo: ";
    cin >> num_ini;

    int num = num_ini;
    int n_div = num;
    int n_digitos = 1;

    while (n_div > 9){
        n_div = n_div / 10;
        n_digitos++;
    }
    int i = 0;
    int suma = 0;
    int digito, potencia;

    while (i < n_digitos){
        digito = num % 10;
        potencia = pow(digito,n_digitos);
        suma = suma + potencia;
        num = num / 10;
        i++;
    }
    bool es_narcis = (num_ini == suma);

    if (es_narcis)
        cout << "\nEl " << num_ini << " es un numero narcisista." << endl;
    else
        cout << "\nEl " << num_ini << " no es un numero narcisista." << endl;
}
