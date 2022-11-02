// Palindromo e Invierte

#include <iostream>
#include <string>
using namespace std;

class SecuenciaCaracteres{
private:
   static const int TAMANIO = 2e6;
   char v[TAMANIO];
   int util;

   void IntercambiaComponentesDirectamente(int pos_izda, int pos_dcha){
      char intercambia;

      intercambia = v[pos_izda];
      v[pos_izda] = v[pos_dcha];
      v[pos_dcha] = intercambia;
   }

   bool EsCorrectaPosicion(int indice){
      return 0 <= indice && indice < util;
   }
public:
   SecuenciaCaracteres()
      :util(0) {
   }

   int Utilizados(){
      return util;
   }

   int Capacidad(){
      return TAMANIO;
   }

   void EliminaTodos(){
      util = 0;
   }

   void Aniade(char nuevo){
      if (util < TAMANIO){
         v[util] = nuevo;
         util++;
      }
   }

   void Modifica(int posicion, char nuevo){
      if (EsCorrectaPosicion(posicion))
         v[posicion] = nuevo;
   }

   char Elemento(int indice){
      return v[indice];
   }

   string ToString(){
      string cadena;

      cadena.reserve(util);

      for (int i=0; i < util; i++)
         cadena.push_back(v[i]);

      return cadena;
   }

   int PrimeraOcurrenciaEntre (int pos_izda, int pos_dcha, char buscado){
      int i = pos_izda;
      bool encontrado = false;

      while (i <= pos_dcha  &&  !encontrado)
         if (v[i] == buscado)
            encontrado = true;
         else
            i++;

      if (encontrado)
         return i;
      else
         return -1;
   }

   int PrimeraOcurrencia (char buscado){
      return PrimeraOcurrenciaEntre (0, util - 1, buscado);
   }

   // Búsquedas

   // Precond: 0 <= izda <= dcha < util
   int PosMinimoEntre(int izda, int dcha){
      int pos_minimo = -1;
      char minimo;

      minimo = v[izda];
      pos_minimo = izda;

      for (int i = izda+1 ; i <= dcha ; i++)
         if (v[i] < minimo){
            minimo = v[i];
            pos_minimo = i;
         }

      return pos_minimo;
   }

   int PosMinimo(){
      return PosMinimoEntre(0, util - 1);
   }

   int BusquedaBinaria (char buscado){
      int izda, dcha, centro;
      bool encontrado = false;

      izda = 0;
      dcha = util - 1;
      centro = (izda + dcha) / 2;

      while (izda <= dcha  &&  !encontrado){
         if (v[centro] == buscado)
            encontrado = true;
         else if (buscado < v[centro])
            dcha = centro - 1;
         else
            izda = centro + 1;

         centro = (izda + dcha) / 2;
      }

      if (encontrado)
         return centro;
      else
         return -1;
   }

   // Recorridos que modifican las componentes

   // Inserta un valor en la posición especificada
   void Inserta(int pos_insercion, char nuevo){
      if (util < TAMANIO  &&  pos_insercion >= 0
         &&  pos_insercion <= util){

         for (int i = util ; i > pos_insercion ; i--)
            v[i] = v[i-1];

         v[pos_insercion] = nuevo;
         util++;
      }
   }

   void Elimina (int posicion){
      if (posicion >= 0 && posicion < util){
         int tope = util-1;

         for (int i = posicion ; i < tope ; i++)
            v[i] = v[i+1];

         util--;
      }
   }

   // Algoritmos de ordenación

   void Ordena_por_Seleccion(){
      int pos_min;

      for (int izda = 0 ; izda < util ; izda++){
         pos_min = PosMinimoEntre(izda, util - 1);
         IntercambiaComponentesDirectamente(izda, pos_min);
      }
   }

   void Ordena_por_Insercion(){
      int izda, i;
      char a_desplazar;

      for (izda=1; izda < util; izda++){
         a_desplazar = v[izda];

         for (i=izda; i > 0 && a_desplazar < v[i-1]; i--)
            v[i] = v[i-1];

         v[i] = a_desplazar;
      }
   }

   void InsertaOrdenadamente(char nuevo){
        int i;

        if (util > TAMANIO){
           for (i=util; i>0 && nuevo < v[i-1]; i--)
                v[i] = v[i-1];

           v[i] = nuevo;
           util++;
        }
   }

   void Ordena_por_Burbuja(){
      int izda, i;

      for (izda = 0; izda < util; izda++)
        for (i = util-1 ; i > izda ; i--)
          if (v[i] < v[i-1])
             IntercambiaComponentesDirectamente(i, i-1);
   }

   void Ordena_por_BurbujaMejorado(){
      int izda, i;
      bool cambio;

      cambio= true;

      for (izda=0; izda < util && cambio; izda++){
        cambio=false;

        for (i=util-1 ; i>izda ; i--)
          if (v[i] < v[i-1]){
             IntercambiaComponentesDirectamente(i, i-1);
             cambio=true;
          }
      }
   }

   void AniadeVarios(SecuenciaCaracteres nuevos){
      int totales_a_aniadir = nuevos.Utilizados();

      for (int i = 0; i < totales_a_aniadir; i++)
         Aniade(nuevos.Elemento(i));
   }

   SecuenciaCaracteres ToUpper(){
      SecuenciaCaracteres en_mayuscula;

      for(int i = 0; i < util; i++)
         en_mayuscula.Aniade(toupper(v[i]));

      return en_mayuscula;
   }

   bool EsPalindromo(){
      bool es_palindromo = true;
      int izda = 0;
      int dcha = util - 1;

      while (izda < dcha && es_palindromo){
         if (v[izda] != v[dcha])
            es_palindromo = false;
         else{
            izda++;
            dcha--;
         }
      }

      return es_palindromo;
   }

   void Invierte(){
      int izda = 0;
      int dcha = util - 1;

      while (izda < dcha){
         IntercambiaComponentesDirectamente(izda, dcha);
         izda++;
         dcha--;
      }
   }

   void EliminaOcurrencias(char a_borrar){
      int i = 0;

      while (i < util){
         if (v[i] == a_borrar){
            Elimina(i);
         }else
            i++;
      }
   }
};

int main(){
   const char TERMINADOR = '#';
   SecuenciaCaracteres secuencia, cad_nueva;
   int total_leidos;
   int capacidad_secuencia;
   char caracter, a_borrar;

   cout << "------MÉTODO ELIMINA OCURRENCIAS (INEFICIENTE)-------" << endl;
   cout << "Introduzca la secuencia de caracteres (term: '#')\n"
        << "y el caracter a eliminar" << endl;

   capacidad_secuencia = secuencia.Capacidad();
   total_leidos = 0;
   caracter = cin.get();

   while (caracter != TERMINADOR && total_leidos < capacidad_secuencia){
      secuencia.Aniade(caracter);
      total_leidos++;
      caracter = cin.get();
   }

   cin >> a_borrar;

   // Llamada al método EliminaOcurrencias

   secuencia.EliminaOcurrencias(a_borrar);

   cad_nueva = secuencia;

   cout << "\nCadena resultante: " << cad_nueva.ToString() << endl;
}
