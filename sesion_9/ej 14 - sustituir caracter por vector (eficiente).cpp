// Sustituir car�cter por vector
#include <iostream>
using namespace std;


int main(){
   const char TERMINADOR = '#';
   const int MAX_NUM_CARACT = 3e6;
   char v[MAX_NUM_CARACT],
        a_insertar[MAX_NUM_CARACT];
   char a_borrar;
   char car;
   int i, util_v, util_a_insert;

   cout << "Sustituye caracter por vector\n"
        << "Introduzca los caracteres del vector, con terminador "
        << TERMINADOR << "\n"
        << "A continuaci�n introduzca el car�cter a sustituir y los caracteres"
        << "del nuevo vector (con el mismo terminador)" << endl;

   // Lectura

   car = cin.get();
   i = 0;

   while (car != TERMINADOR){
      v[i] = car;
      car = cin.get();
      i++;
   }

   util_v = i;

   car = cin.get();
   i = 0;

   while (car != TERMINADOR){
      a_insertar[i] = car;
      car = cin.get();
      i++;
   }

   util_a_insert = i;

   a_borrar = cin.get();

   // C�digo implementado:

   /* Algoritmo:
   1) Primero se recorre <v> para contar cu�ntos caracteres
   a_borrar hay para actualizar el tama�o del vector (con
   los caracteres ya sustituidos por el vector a_insertar).

   2) La posici�n de lectura se inicializa en util_v del
   principio y la de escritura al final del vector ampliado.

   3) Si durante la lectura se encuetra el car�cter a_borrar,
   un bucle for insertar� los caracteres del nuevo vector al final.
   Se decrementan las posiciones de lectura y escritura (esta
   �ltima retrocede tantas posiciones como caracteres a_insertar hay).

   4) Si el car�cter es diferente al que hay que borrar, este
   se a�ade en escritura y tanto esc como lec retroceden 1 posici�n.
   */

   int num_a_borrar = 0;

   for (int i = 0; i < util_v; i++)
      if (v[i] == a_borrar)
         num_a_borrar++;

   int util_v_final = (util_v - num_a_borrar) + num_a_borrar * util_a_insert;
   int lec = util_v-1;
   int esc = util_v_final-1;

   while (esc != lec){
      if (v[lec] == a_borrar){
         for (int j = util_a_insert-1; j >= 0; j--){
            v[esc] = a_insertar[j];
            esc--;
         }
      }else{
         v[esc] = v[lec];
         esc--;
      }

      lec--;
   }

   // Salida de datos

   cout << "<";

   for (int i = 0; i < util_v_final; i++)
      cout << v[i] ;

   cout << ">";

// Ejemplo de entrada:
// unoadosaa#TTU#a

// Salida:
// unoTTUdosTTUTTU
}
