#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    const double PI = 6 * asin(0.5);
    double radio;
    double area;
    double longitud;

   cout << "\nIntroduzca el valor del radio: ";
   cin >> radio;

   area = PI * radio * radio;
   longitud = 2 * PI  * radio;

   cout << "\n\nEl area del circulo es: " << area;
   cout << "\n\nLa longitud de la circunferencia es: " << longitud;
}
