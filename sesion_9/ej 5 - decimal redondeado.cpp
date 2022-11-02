#include <iostream>
#include <cmath>
using namespace std;

double PotenciaEntera(int base, int exp){
   //Observe que si exponente fuese cero,
   //la variable potencia se quedaría con 1,

   int potencia, exp_positivo;

   exp_positivo = abs(exp);
   potencia = 1;

   for (int i = 1; i <= exp_positivo; i++)
      potencia = potencia * base;

   if (exp < 0)
      potencia = 1/potencia;

   return potencia;
}

double Redondea(double real, int num_decim){
   double real_redond, desplaz;

   desplaz = PotenciaEntera(10, num_decim);
   real_redond = round(real * desplaz);
   real_redond = real_redond / desplaz;

   return real_redond;
}

int main(){
   double real, real_redond;
   int num_decim;

   cout << "-----------------DECIMAL REDONDEADO-----------------" << endl;
   cout << "Introduzca el número real y el número de decimales:\n";
   cin >> real;
   cin >> num_decim;

   real_redond = Redondea(real, num_decim);

   cout << "\nNúmero redondeado: " << real_redond << endl;
}
