/* Algoritmo:
1) Se inicializan a false todos los elementos de las matrices (asig) y (ya_asig).
    (asig): la matriz bool "A"
    (ya_asig): matriz bool que indica qué pedidos (columnas) no pueden repetirse más.

2) Con bucles anidados, se recorren los elementos de (tarif) para ir actualizando la
   pos_min de cada fila que cumpla !ya_asig. Por cada pos_min encontrada, se le asigna
   true a dicha posición de (asig) y (ya_asig). También se va actualizando el coste.

3) Para la salida de datos, se recorre (asig) y se imprimen solo los elementos que
   cumplen: asig[i][j] == true.
*/

#include <iostream>
using namespace std;

int main(){
   const int MAX_FIL = 10, MAX_COL = 10;
   double tarif[MAX_FIL][MAX_COL];
   int util_tecn, util_pedidos;

   // Entrada de datos:

   /* Suponiendo que util_tecn y util_pedidos son enteros iguales > 0,
      y que la matriz bool tiene igual num fil y column que (tarif)
   */

   cout << "----------ASIGNACIÓN DE PEDIDOS A TÉCNICOS-----------" << endl;
   cin >> util_tecn;

   util_pedidos = util_tecn;

   for (int i = 0; i < util_tecn; i++)
      for (int j = 0; j < util_pedidos; j++)
         cin >> tarif[i][j];

   // Cómputo:

   const int MAX_COST = 1500;
   bool asig[MAX_FIL][MAX_COL];
   bool ya_asig[MAX_COL];

   for (int i = 0; i < util_tecn; i++)
      for (int j = 0; j < util_pedidos; j++)
         asig[i][j] = false;

   for (int j = 0; j < util_pedidos; j++)
      ya_asig[j] = false;

   int pos_min, minim;
   int cost = 0;

   for (int i = 0; i < util_tecn; i++){
         minim = MAX_COST + 1;
      for (int j = 0; j < util_pedidos; j++){
         if (!ya_asig[j] && tarif[i][j] < minim){
            minim = tarif[i][j];
            pos_min = j;
         }
      }
         asig[i][pos_min] = true;
         ya_asig[pos_min] = true;
         cost = cost + tarif[i][pos_min];
   }

   // Salida de datos:

   for (int i = 0; i < util_tecn; i++)
      for (int j = 0; j < util_pedidos; j++){
         if (asig[i][j] == true)
            cout << "\nTécnico: " << i << " -> Pedido: " << j;
      }
   cout << "\nCoste total: " << cost << endl;
}
