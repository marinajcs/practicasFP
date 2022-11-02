#include <iostream>
using namespace std;

int main(){

   int num_elem, n, T;

   cout << "--------------SUMATORIA-------------\n";
   cout << "Introduzca el numero de elementos: ";
   cin >> num_elem;
   cout << "Introduzca los numeros de dicho vector:\n";

   int i = 0;
   int v[num_elem];

   while (i < num_elem){
       cin >> v[i];
       i++;
   }

   int util_v = i;

   cout << "Introduzca el valor de T (suma total): ";
   cin >> T;

   bool encontrado, pos_encont;

   for (int i = 0; i < util_v; i++){
       int sum = 0;

       for (int j = i; j < util_v && sum < T; j++){
           sum = sum + v[j];
           encontrado = sum == T;
       }

       if (encontrado)
           pos_encont = i;
   }

   if (encontrado)
        cout << "\nSecuencia encontrada a partir de la posicion " << pos_encont << endl;
   else
        cout << "\nNo hay ninguna secuencia" << endl;

}

