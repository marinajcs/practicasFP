#include <iostream>

using namespace std;

int main(){

    char tipo_radar;
    cin >> tipo_radar;

    if (tipo_radar == 'F' && tipo_radar == 'f')

    /*Teniendo en cuenta que queremos que el bloque if se
    ejecute si el valor de char que leerá es o bien F o bien f,
    no podemos guardar dos valores ('f' y 'F') en la misma variable.
    Habría que sustituir "&&" por "||"
    */

    double velocidad;
    cin >> velocidad;

    if (velocidad > 100 && velocidad < 70)
        cout << "\nVelocidad fuera del rango";

    /*Siempre será "false" porque, o bien lee un valor menor que 100 y
    no se cumple la primera condición, o bien lee un valor mayor que 100
    y no se cumple la segunda. False && (true/false) = false.
    Habría que sustituir "&&" por "||"
    */

    double velocidad;
    cin >> velocidad;

    if (velocidad > 100 || velocidad > 110)
        cout << "Velocidad excesiva";

    /* "Velocidad > 100" ya incluye aquellos valores para los que
    velocidad > 110, por tanto se puede poner simplemente:
    if (velocidad > 100)
    */

}

