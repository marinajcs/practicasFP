#include <iostream>

using namespace std;

int main(){

    double salario_base;
    double salario_final;

    /*
    Se elige opci�n (b): crear variable "salario_final"
    As� se evita realizar operaciones en la sentencia cout,
    donde debe aparecer exclusivamente el resultado (opci�n a).
    Adem�s es mejor crear una nueva variable que exprese el resultado,
    en vez de mostrarlo en la variable "inicial" (opci�n c), pues podr�a
    dar lugar a confusiones y errores.
    */

    cout << "Introduzca el salario inicial: ";
    cin >> salario_base;

    salario_final = salario_base * 1.02;

    cout << "\nEl salario final es: " << salario_final << endl;


}
