#include <iostream>
#include <string>
using namespace std;

// ERRORES EN FUNCIONES void

/* 1)
La función elimina el último carácter de la cadena,
aunque luego no se puede acceder a esa cadena nueva,
y si se quiere visualizar habría que añadir un cout
dentro de la función.
*/

void EliminaUltimo(string cadena){
    cadena.pop_back();
}

/* 2)
No se puede declarar una variable con el mismo nombre
que uno de los parámetro formal, habría que eliminar
"double valor" para que funcionara.
*/

void Imprime(double valor){
    double valor;
    cout << valor;
}

/* 3)
Una función void no devuelve ningún valor, por lo que
no tiene sentido declarar una que calcule el área de un
cuadrado y lo devuelva con un return.
*/

void Cuadrado (int entero){
    return entero*entero;
}

