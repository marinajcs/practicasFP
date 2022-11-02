// Elimina ocurrencias de una componente en un vector -versi�n eficiente-

/*
El algoritmo del ejercicio 5
[Elimina ocurrencias de una componente -versi�n ineficiente-] es muy ineficiente ya
que requiere trasladar muchas veces muchas posiciones (usa dos bucles anidados).
Para comprobarlo, recupere el texto
http://decsai.ugr.es/jccubero/FP/Quijote_con_ruido.txt
En �l aparecen numerosas ocurrencias del car�cter '~' (c�digo ASCII 126) como
ruido en el texto y se quieren eliminar. Este fichero contiene los datos en el orden
esperado ( vector#caracter_a_borrar ) para poder redirigir directamente la en-
trada de datos del programa. El vector contendr� el texto del Quijote. Al ser un vector
muy grande, recuerde compilar el programa con las instrucciones detalladas en la
p�gina RP-III.1.
Si aplica el algoritmo ineficiente, la ejecuci�n puede tardar m�s de 12 minutos (recuer-
de compilar el programa con las instrucciones detalladas en la p�gina RP-III.1)
Para resolver eficientemente este problema se propone utilizar dos variables,
posicion_lectura y posicion_escritura que nos vayan indicando, en ca-
da momento, la componente que se est� leyendo y el sitio d�nde tiene que es-
cribirse. Por ejemplo, supongamos que en un determinado momento la variable
posicion_lectura vale 6 y posicion_escritura 3. Si la componente en la
posici�n 6 es el car�cter a borrar, simplemente avanzaremos posicion_lectura .
En caso contrario, la colocaremos en la posici�n 3 y avanzaremos una posici�n ambas
variables.
Implemente este algoritmo y observe la diferencia de tiempo al ejecutarlo sobre el
Quijote, ya que ahora el tiempo de ejecuci�n es de unos 8 milisegundos.
*/
/*
Ejemplo de entrada: maaaovaiala#a
-- Salida correcta: movil
Ejemplo de entrada: aaaaa#a
-- Salida correcta: vector vac�o
*/

#include <iostream>
using namespace std;

int main(){
   const char TERMINADOR = '#';
   const int MAX_NUM_CARACT = 3e6;  // Compile con la opci�n -Wl,--stack,21000000
   char v[MAX_NUM_CARACT];
   char a_borrar;
   char car;
   int i, util_v;

   // Lectura

   car = cin.get();
   i = 0;

   while (car != TERMINADOR){
      v[i] = car;
      car = cin.get();
      i++;
   }

   util_v = i;
   a_borrar = cin.get();

   // C�mputo

   int pos_lec;
   int pos_esc = 0;

   for (pos_lec = 0; pos_lec < util_v; pos_lec++){
      if (v[pos_lec] != a_borrar){
         v[pos_esc] = v[pos_lec];
         pos_esc++;
   }

   util_v = pos_esc;

   // Salida de datos

   cout << "<";

   for (int i = 0; i < util_v; i++)
      cout << v[i] ;

   cout << ">";
}
