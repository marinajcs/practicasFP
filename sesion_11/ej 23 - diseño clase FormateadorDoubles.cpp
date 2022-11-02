#include <iostream>
#include <string>
#include <cmath>
using namespace std;

// Dado que son genéricas, mejor establecerlas como funciones globales

double Redondea(double real, int num_dec){
    ...
}

string EliminaUltimos(string cadena, char ultimo){
    ...
}
/* Comprobación:
Definiendo un objeto "objt",
    cadena_nueva = objt.EliminaUltimos(cad, 'M')
objt NO tiene ninguna utilidad, ya que bien podría ser:
    cadena_nueva = EliminaUltimos(cad, 'M')
Entonces, es mejor definirla como función en vez de método público
*/

class FormateadorDoubles{
private:
    string izq;
    string dch;
    int decim;
    enum class SeparDecim {PUNTO, COMA}; // Opcional: tipo dato enumerado
    SeparDecim separ = SeparDecim::PUNTO; // al haber solo dos opciones: punto/coma
public:
    /*Si no se quieren añadir delimitadores
    se utiliza un constructor sin parámetros*/

    FormateadorDoubles(){
        ...
    }

    //Si se quieren añadir delimitadores, se emplea lo sig.:

    FormateadorDoubles(string izq, string dch){
        ...
    }

    void SetSeparadorComa(){
        separ = SeparDecim::COMA;
    }

    void SetSeparadorPunto(){
        separ = SeparDecim::PUNTO;
    }

    void SetNumDec(int num_dec){
        ...
    }

    // El encargado de realizar la transformación:

    string GetCadena(double real){ // Se llama a las sig funciones:
        Redondea(...), EliminaUltimos(...)
    }
};

int main(){
    FormateadorDoubles form_double("<", ">");
    string cadena;

    cadena = form_double.GetCadena(6.893);

    cout << cadena  // < 6.--- > (depende del num_decim)
}
