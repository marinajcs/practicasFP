#include <iostream>
#include <string>
using namespace std;

// ERRORES EN FUNCIONES void

/* 1)
La funci�n elimina el �ltimo car�cter de la cadena,
aunque luego no se puede acceder a esa cadena nueva,
y si se quiere visualizar habr�a que a�adir un cout
dentro de la funci�n.
*/

void EliminaUltimo(string cadena){
    cadena.pop_back();
}

/* 2)
No se puede declarar una variable con el mismo nombre
que uno de los par�metro formal, habr�a que eliminar
"double valor" para que funcionara.
*/

void Imprime(double valor){
    double valor;
    cout << valor;
}

/* 3)
Una funci�n void no devuelve ning�n valor, por lo que
no tiene sentido declarar una que calcule el �rea de un
cuadrado y lo devuelva con un return.
*/

void Cuadrado (int entero){
    return entero*entero;
}

