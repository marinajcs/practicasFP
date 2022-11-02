// Contiene d�bil

/*
Dados dos vectores grande y peque de
tipo char, queremos comprobar si el primero contiene al segundo de la siguiente
forma: todos los caracteres de peque tienen que aparecer en grande en el
mismo orden, aunque no tienen por qu� estar consecutivos. Por ejemplo, el vector
grande = {'d','e','s','t','i','n','o'} contiene d�bilmente al vector
peque = {'s','i'} pero no a peque = {'i','s'}.
Construya un programa que lea desde teclado los caracteres del vector grande, parando
la entrada cuando se introduzca el car�cter #. Haga lo mismo para introducir los
caracteres del vector peque. El programa indicar� si el vector grande contiene o no
al vector peque.
Ejemplo de entrada: destino#si#
.... Salida correcta: S� lo contiene
*/

#include <iostream>
using namespace std;

int main(){
   const char TERMINADOR = '#';
   const int MAX_NUM_CARACT = 200;
   char grande[MAX_NUM_CARACT],
        peque[MAX_NUM_CARACT];
   char car;
   int util_grande, util_peque;
   int num_leidos;

   cout << "-------------------------CONTIENE D�BIL-------------------------\n";
   cout << "B�squeda -d�bil- de un vector de caracteres dentro de otro\n"
        << "Introduzca los caracteres del vector grande, con terminador "
        << TERMINADOR << "\n"
        << "A continuaci�n, introduzca  los caracteres del vector peque�o,";
   cout << "\nusando el mismo terminador.\n\n";

   // Lectura

   car = cin.get();
   num_leidos = 0;

   while (car != TERMINADOR && num_leidos < MAX_NUM_CARACT){
      grande[num_leidos] = car;
      car = cin.get();
      num_leidos++;
   }

   util_grande = num_leidos;

   car = cin.get();
   num_leidos = 0;

   while (car != TERMINADOR && num_leidos < MAX_NUM_CARACT){
      peque[num_leidos] = car;
      car = cin.get();
      num_leidos++;
   }

   util_peque = num_leidos;

/* Algoritmo:
    1)Recorrer el vector <peque> y, con un bucle anidado, recorrer <grande>
      para comprobar si alg�n car�cter coincide con el primero de <peque>.
    2)En cuanto lo encuentre, avanzar� la posici�n de inicio a partir la cual se
      volver� a recorrer el vector <grande> en busca del siguiente car�cter de <peque>.
      Tambi�n se incrementar� el n�mero de caracteres encontrados.
      Si no ha encuentrado ninguno tras el primer recorrido, se saldr� del bucle principal.
    3)Cuando termine, si el n�mero de caracteres encontrados coincide con -util_peque-,
      se confirma que el grande contiene d�bilmente al peque�o.
*/

   // C�mputo

   int inicio = 0;
   int num_car_encont = 0;
   bool seguir_buscando = true;
   bool encontrado;

   for (int j = 0; j < util_peque && seguir_buscando; j++){
      for (int i = inicio; i < util_grande; i++){
         if (peque[j] == grande[i]){
            inicio = i + 1;
            num_car_encont++;
         }
      }
      if (num_car_encont == 0)
         seguir_buscando = false;
   }
   encontrado = num_car_encont == util_peque;

   //Salida de datos

   if (encontrado)
      cout << "\nEl vector peque�o est� dentro del grande" << endl;
   else
      cout << "\nEl vector peque�o NO est� dentro del grande" << endl;
}
