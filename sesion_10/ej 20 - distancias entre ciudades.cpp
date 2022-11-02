#include <iostream>
#include <cmath>
using namespace std;

int main(){
   const int MAX_NUM_CIUDADES = 50;
   double mapa[MAX_NUM_CIUDADES][MAX_NUM_CIUDADES];
   int num_ciudades;

   cout << "Mapa de distancias"
        << "\n\nIntroduzca los datos en el siguiente orden:"
        << "\n- Número de ciudades"
        << "\n- Distancias entre ellas en forma de matriz diagonal superior"
        << "\n\n";

   cin >> num_ciudades;

   for (int i = 0; i < num_ciudades; i++)
      for (int j = 0; j < num_ciudades; j++)
         mapa[i][j] = 0;

   for (int i = 0; i < num_ciudades - 1; i++)
      for (int j = i+1; j < num_ciudades; j++){
         double dist;

         cin >> dist;
         mapa[i][j] = mapa[j][i] = dist;
      }

   // Ir actualizando valores de max_conex y ciudad_más_conect

   int ciudad_mas_conect;
   int max_conex = 0;
   int num_conex;

   for(int i = 0; i < num_ciudades; i++){
      num_conex = 0;
      for(int j = 0; j < num_ciudades; j++){
         if(mapa[i][j] > 0)
            num_conex++;
      }

      if (num_conex > max_conex){
         max_conex = num_conex;
         ciudad_mas_conect = i;
      }
   }

   // Salida de datos:

   cout << "\nCiudad más conectada: " << ciudad_mas_conect
        << " con un total de " << max_conex
        << " conexiones" << endl;
}
