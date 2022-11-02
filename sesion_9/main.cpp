// Elasticidad Precio-Demanda

#include <iostream>
#include <cmath>
using namespace std;

double VarPorcent(double val_ini, double val_fin){
   double VP;
   VP = abs(100 * (val_fin - val_ini) / val_ini);

   return VP;
}

double ElasticidadPD(double prec_ini, double prec_fin, double dem_ini, double dem_fin){
   double elast_pd;
   double VP_dem;
   double VP_prec;

   VP_prec = VarPorcent(prec_ini, prec_fin);
   VP_dem = VarPorcent(dem_ini, dem_fin);
   elast_pd =  VP_dem / VP_prec;

   return elast_pd;
}

int main(){
   double precio_ini, precio_fin;
   double demanda_ini, demanda_fin;
   double elast_pd;

   cout << "Cálculo de la Elasticidad Precio-Demanda.\n\n"
        << "Introduzca cuaternas de valores:"
        << "El precio inicial, el precio final, la demanda inicial y la demanda final.\n"
        << "Introduzca cualquier negativo en el precio inicial para terminar\n\n";

   cin >> precio_ini;

   while (precio_ini >= 0){
      cin >> precio_fin;
      cin >> demanda_ini;
      cin >> demanda_fin;

      elast_pd = ElasticidadPD(precio_ini, precio_fin, demanda_ini, demanda_fin);

      cout << "\nElasticidad Precio-Demanda: " << elast_pd << endl << endl;
      cin >> precio_ini;
   }
}
