//MENSAJE INICIAL
#include <iostream>
#include <string>
using namespace std;

string LeeString(char terminador){
    string cadena;
    char caracter;

    caracter = cin.get();

    while (caracter != terminador){
        cadena.push_back(caracter);
        caracter = cin.get();
    }

    return cadena;
}

void MensajeInicial(char car, string cadena){
    int tope_car;

    tope_car = cadena.size();

    for(int i = 0; i < tope_car; i++)
        cout << car;

    cout << endl << cadena << endl;

    for(int i = 0; i < tope_car; i++)
        cout << car;
}

int main(){
    const char TERM = '@';
    char car;
    string cadena;

    cin >> car;
    cadena = LeeString(TERM);
    cout << endl;

    MensajeInicial(car, cadena);
    cout << endl;
}
