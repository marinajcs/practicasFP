#include <iostream>
using namespace std;

int main(){
   const char TERMINADOR = '#';
   const int MAX_NUM_CARACT = 3e6;
   char v[MAX_NUM_CARACT], nuevo[MAX_NUM_CARACT], sust[MAX_NUM_CARACT];
   char a_borrar;
   char car;
   int i, util_v, util_nuevo;

   cout << "--------------SUSTITUYE CARACTER POR VECTOR-------------\n";
   cout << "Introduzca los caracteres del vector, con terminador " << TERMINADOR << "\n";
   cout << "A continuacion introduzca el caracter a sustituir y los\n";
   cout << "caracteres del nuevo vector (con el mismo terminador)\n";

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
      nuevo[i] = car;
      car = cin.get();
      i++;
   }

   util_nuevo = i;

   a_borrar = cin.get();

   for (i = 0; i <= util_v; i++){
       if (v[i] == a_borrar){
           for (int j = 0; j <= util_nuevo; j++)
                sust[j] = nuevo[j];
        }else
            sust[i] = v[i];
    }

   cout << "<";

   for (int i = 0; i < util_v; i++)
      cout << sust[i] ;

   cout << ">";

}



