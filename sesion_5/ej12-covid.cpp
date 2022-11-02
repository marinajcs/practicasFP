#include <iostream>
#include <cctype>

using namespace std;

int main(){
    double bodyTemperature;
    bool difficultyBreathing, diabetes, cancer, fiebre;
    char opcion;

   cout << "Deteccion Aproximada de COVID-19\n\n"
        << "Introduzca la temperatura y a continuacion conteste S/N a las siguientes preguntas:\n\n"
        << "- ¿Tiene dificultades para respirar?\n"
        << "- ¿Es diabetico?\n"
        << "- ¿Tiene algun tipo de cancer?\n\n";

   cin >> bodyTemperature;
   fiebre = bodyTemperature >= 38;
   cin >> opcion;
   difficultyBreathing = toupper(opcion) == 'S';
   cin >> opcion;
   diabetes = toupper(opcion) == 'S';
   cin >> opcion;
   cancer = toupper(opcion) == 'S';

    if (fiebre){
        if (difficultyBreathing || diabetes || cancer)
            cout << "\nConsulte autoridades locales." << endl;
        else
            cout << "\nCuarentena en su casa." << endl;
    }else
        cout << "\nTest negativo." << endl;
}
