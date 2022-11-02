// Top k (versión ineficiente)

/* Algoritmo:
Vector original: v
Vector que contendrá los k mayores valores: topk
    1)Copiar v en topk
    2)Ordenar topk de MAYOR a MENOR <-- Atención!!!
      (se recomienda modificar el algoritmo de ordenación
       por inserción)
    3)Seleccionar los k primeros elementos de topk
*/

#include <iostream>
using namespace std;

int main (){
    int k, n;
    const int MAX_NUM = 100;
    int v[MAX_NUM];
    int topk[MAX_NUM];

    cout << "---------------- TOP K (VERSION INEFICIENTE)--------------";
    cout << "\nIntroduzca una secuencia de numeros enteros positivos:\n";

    int util_v = 0;

    cin >> n;

    while (n >= 0 && util_v < MAX_NUM){
        v[util_v] = n;
        util_v++;

        cin >> n;
    }

    cout << "\nIntroduzca el valor de k: ";
    cin >> k;

    // Copiar v en topk:

    for (int i = 0; i < util_v; i++){
        topk[i] = v[i];
    }

    // Ordenación por inserción:

    int a_desplz;

    for(int izq = 1; izq < util_v; izq++){
        a_desplz = topk[izq];
        int i;

        for (i = izq; i > 0 && a_desplz > topk[i-1]; i--)
            topk[i] = topk[i-1];

        topk[i] = a_desplz;
    }

    // Salida de datos:

    cout << "\nLos " << k << " primeros valores de <topk> son: ";
    cout << "\n< ";

    for (int j = 0; j < k; j++)
        cout << topk[j] << " ";

    cout << ">" << endl;
}

