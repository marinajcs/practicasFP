#include <iostream>

using namespace std;

int main(){

    double salario_base;
    double salario_final;

    /*
    Se elige opción (b): crear variable "salario_final"
    Así se evita realizar operaciones en la sentencia cout,
    donde debe aparecer exclusivamente el resultado (opción a).
    Además es mejor crear una nueva variable que exprese el resultado,
    en vez de mostrarlo en la variable "inicial" (opción c), pues podría
    dar lugar a confusiones y errores.
    */

    cout << "Introduzca el salario inicial: ";
    cin >> salario_base;

    salario_final = salario_base * 1.02;

    cout << "\nEl salario final es: " << salario_final << endl;


}
