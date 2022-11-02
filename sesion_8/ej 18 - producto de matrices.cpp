/* Enunciado:
[Producto de matrices] Lea los datos de una matriz de reales tal y como
se indica en el ejercicio 17 [Traspuesta] de esta relación de problema.

Si la matriz que se ha introducido es n × m, por ejemplo, ahora se
procederá a leer los datos de una segunda matriz m × k. Por lo tanto,
primero se lee el entero k y luego los valores de esta segunda matriz.

Multiplique ambas matrices y muestre el resultado en pantalla.
*/

#include <iostream>
using namespace std;

int main (){
    const int MAX_FIL = 10;
    const int MAX_COL = 10;
    double mtr1[MAX_FIL][MAX_COL];
    int util_fil_mtr1, util_col_mtr1;

    cout << "--------------- PRODUCTO DE MATRICES----------------";
    cout << "\nIntroduzca el numero de filas y luego el numero de\n";
    cout << "columnas de la primera matriz:\n";

    cin >> util_fil_mtr1;
    cin >> util_col_mtr1;

    cout << "\nIntroduzca los elementos de la primera matriz:\n";

    for (int i = 0; i < util_fil_mtr1; i++)
        for (int j = 0; j < util_col_mtr1; j++)
            cin >> mtr1[i][j];

    /* El número de columnas de la primera matriz debe ser igual
    al número filas de la segunda matriz
    */

    double mtr2[MAX_FIL][MAX_COL];
    int util_fil_mtr2 = util_col_mtr1;
    int util_col_mtr2;

    cout << "\nIntroduzca el numero de columnas de la segunda matriz:\n";
    cin >> util_col_mtr2;

    cout << "\nIntroduzca los elementos de la segunda matriz:\n";

    for (int i = 0; i < util_fil_mtr2; i++)
        for (int j = 0; j < util_col_mtr2; j++)
            cin >> mtr2[i][j];

    /*La mtr resultado (solución) tendrá el mismo número de filas
    que mtr1 y el mismo número de columnas que mtr2
    */

    double mtr_sol[MAX_FIL][MAX_COL];
    int util_fil_sol = util_fil_mtr1;
    int util_col_sol = util_col_mtr2;


    // Se realiza la multiplicación (filas mtr1 x columnas mtr2)

    for (int i = 0; i < util_fil_sol; i++){
        for (int j = 0; j < util_col_sol; j++){
            double suma = 0;

            for (int k = 0; k < util_col_mtr1; k++)
                suma = suma + mtr1[i][k] * mtr2[k][j];

            mtr_sol[i][j] = suma;
        }
    }

    // Inmprimir resultados:

    cout << "\nMatriz resultante del producto:\n";

    for (int i = 0; i < util_fil_sol; i++){
        cout << "\n";

        for (int j = 0; j < util_col_sol; j++)
            cout << mtr_sol[i][j] << '\t';
    }

    cout << endl;
}

