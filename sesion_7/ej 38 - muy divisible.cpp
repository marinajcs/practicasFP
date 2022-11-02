#include <iostream>
using namespace std;

int main(){
    int min_, max_, k;

    cout << "-------CALCULO DE NUMEROS MUY DIVISIBLES-------\n";
    cout << "Introduzca un valor minimo: ";
    cin >> min_;

    do{
        cout << "Introduzca un valor maximo: ";
        cin >> max_;
    }while(max_ < min_);

    do{
        cout << "Introduzca un numero entero (k): ";
        cin >> k;
    }while (k < 1);

    cout << "\nNumeros muy divisibles del intervalo [" << min_ << ", " << max_ << "]:\n";

    /* Algoritmo:
    - Un bucle recorre los numeros (num) del intervalo [min,max]
    - Otro bucle (anidado) calcula los divisores de cada num.
      Si tiene k o más divisores, imprime el valor en pantalla.

    */

    for (int num = min_; num <= max_; num++){

        int num_dvsores = 0;

        for (int dvsor = 2; dvsor <= num/2 && num_dvsores < k; dvsor++){
            if (num % dvsor == 0)
                num_dvsores++;
        }

        bool tiene_k_dvsores = num_dvsores >= k;

        if (tiene_k_dvsores)
            cout << num << " ";
    }

    cout << endl;
}

