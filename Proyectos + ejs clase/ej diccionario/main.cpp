#include <iostream>
#include <string>
using namespace std;

#include<cstdlib> // stdlib.h
#include <ctime> // time.h

/*
MAX x -> 10
x = (5 * x + 7) % 11
5 10 2 6 4 ...   Parecen valores más aleatorios
RAND_MAX
*/
/*
int main(){
    //srand(50);
    /*
    srand(time(0));  // Número de seg del reloj interno
    cout << RAND_MAX << endl; // Entero más grande de 2 Bytes

    for (int i = 0; i < 10; ++i)
        cout << rand() << endl;

    cout << endl;

    /*
    for (int i = 0; i < 10; ++i){
        double a01 = rand() / RAND_MAX;
        cout << rand() << endl;
    } // Sale 0 porque RAND_MAX es mucho más grande que rand()

    cout << endl;


    for (int i = 0; i < 10; ++i){
        double a01 = rand() / (RAND_MAX + 1.0);
        cout << a01 * 6 + 1 << endl;
    } // Números bastante aleatorios
    */
    /*int v[8] = {1,2,3,4,5,4,3,7};
    int nv = 8;
*/
    //Solución: no establecer dimensiones del vector
    int v[] = {1,2,3,3,5,2,3,7,1,6,7,8,1,8,9};
    int nv = sizeof(v) / sizeof(int); //Sale núm elem

    for (int i = 0; i < nv; ++i)
        cout << v[i] << endl;

    cout << endl;

    string cad[] = {"hola","y","adiós"};
    int ncad = sizeof(cad) / sizeof(string);

    cout << ncad << endl;
}
*/
