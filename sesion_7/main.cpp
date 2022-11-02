#include <iostream>
using namespace std;

int main(){
   const char TERMINADOR = '@';
   const int NUM_CARACT_ASCII = 256;
   const int MAX_NUM_CARACT = 1e4;

   char a_buscar[NUM_CARACT_ASCII];
   int frecuencias[NUM_CARACT_ASCII];
   char texto[MAX_NUM_CARACT];

   char car;
   int util_a_buscar, util_texto;

   cout << "Frecuencias\n"
        << "Introduzca los caracteres del vector a buscar, con terminador "
        << TERMINADOR << "\n"
        << "A continuación introduzca  los caracteres del texto,"
        << " usando el mismo terminador.\n\n";

   // Lectura

   car = cin.get();
   util_a_buscar = 0;

   while (car != TERMINADOR && util_a_buscar < NUM_CARACT_ASCII){
      a_buscar[util_a_buscar] = car;
      car = cin.get();
      util_a_buscar++;
   }

   car = cin.get();
   util_texto = 0;

   while (car != TERMINADOR && util_texto < MAX_NUM_CARACT){
      texto[util_texto] = car;
      car = cin.get();
      util_texto++;
   }


   ///////////////////////////////////////////////////////////
   // Incluya aquí el código para realizar la búsqueda
   ///////////////////////////////////////////////////////////

   for (int k = 0; k < NUM_CARACT_ASCII; k++){
       frecuencias[i] = 0;
       for (int i = k; i < util_texto, i++){

           frecuencias[i]++;
      }

   }

   ///////////////////////////////////////////////////////////
   // Imprima en pantalla los valores del vector frecuencias
   ///////////////////////////////////////////////////////////


   /*
   Ja@Juan Carlos Cubero@º

   J: 1
   a: 2
   */
}

