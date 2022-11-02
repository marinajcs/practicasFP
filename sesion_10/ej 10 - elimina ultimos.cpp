#include <iostream>
#include <string>
using namespace std;

string LeeString(char terminador){
   string cadena;
   char caracter;

   caracter = cin.get();

   while (caracter != terminador){
      cadena.push_back(caracter);
      caracter = cin.get();
   }

   return cadena;
}

string ElimaUltimos(string cadena, char a_borrar){
    int ult = cadena.size()-1;

    while(cadena != "" && cadena[ult] == a_borrar){
        cadena.erase(ult);
        ult--;
    }

    return cadena;
}

int main(){
    string original, cad_nueva;
    char a_borrar;
    const char TERM = '#';

    original = LeeString(TERM);

    cin >> a_borrar;
    cad_nueva = ElimaUltimos(original, a_borrar);

    cout << cad_nueva << endl;
}
