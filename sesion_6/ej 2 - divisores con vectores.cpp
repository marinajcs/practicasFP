#include <iostream>
using namespace std;

int main(){
   int entero, ultimo_divisor, divisor;
   int divisores[10], util_dvsores;

   cout << "DIVISORES DE UN ENTERO\n\n";

   do{
      cout << "Introduce un numero entero positivo: ";
      cin >> entero;
   }while (entero <= 0);

   divisor = 2;
   ultimo_divisor = entero / 2;
   util_dvsores = 0;

   while (divisor <= ultimo_divisor){
      if (entero % divisor == 0){
        util_dvsores++;
        divisores[util_dvsores - 1] = divisor;
      }

      divisor++;
   }

    cout << "\nDivisores de " << entero << ": ";

    for (int i = 0; i < util_dvsores; i++)
        cout << divisores[i] << " ";

    cout << endl;
}
