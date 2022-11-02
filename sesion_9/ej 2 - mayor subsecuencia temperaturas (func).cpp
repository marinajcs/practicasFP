#include <iostream>
using namespace std;

bool EnRango(double temp){
   bool en_rango;
   en_rango = temp < 90 && temp > -60;

   return en_rango;
}

int main(){
   double act, ante;
   int long_act, long_mayor, pos_act, pos_ini, pos_ini_mayor;
   bool fin_input;

   cout << "Mayor secuencia ascendente de temperaturas\n\n";

   /*
   Algoritmo (Mayor subsecuencia creciente):

      Mientras hay datos por leer
         cin >> act

         Si act == terminador || act < ant
            => Actualizar, en su caso, long_mayor (y pos_ini_mayor)
               Reiniciar pos_ini
         si no
            long_sec_act++

         ante = act
   */

   long_act = 1;
   long_mayor  = 0;
   pos_ini_mayor = 1;
   pos_act  = 1;
   pos_ini  = 1;

   cin >> ante;
   fin_input = !EnRango(ante); // <- Así se evita repetir código

   while (! fin_input){
      cin >> act;
      pos_act++;
      fin_input = !EnRango(act);

      if (fin_input || act < ante){
         if (long_act > long_mayor){
            long_mayor = long_act;
            pos_ini_mayor = pos_ini;
         }

         long_act = 1;
         pos_ini = pos_act;
      }
      else
         long_act++;

      ante = act;
   }

   cout << "\nMayor subsecuencia: \nPosición de inicio -> " << pos_ini_mayor;
   cout << "\nLongitud -> " << long_mayor;
}
