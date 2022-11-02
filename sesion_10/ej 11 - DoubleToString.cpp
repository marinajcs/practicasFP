#include <iostream>
#include <cmath>
#include <string>
using namespace std;

double PotenciaEntera(int base, int exp){
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

string ElimaUltimos(string cadena, char a_borrar){
    int ult = cadena.size()-1;

    while(cadena != "" && cadena[ult] == a_borrar){
        cadena.erase(ult);
        ult--;
    }

    return cadena;
}

string DoubleToString(double real, int num_dec){
    const int NUM_DEC_MAX = 6;
    double real_redond;
    string cad_orig, cad_nueva;
    const char a_borrar = '0';

    if (num_dec < NUM_DEC_MAX)
        real_redond = Redondea(real, num_dec);
    else
        real_redond = Redondea(real, NUM_DEC_MAX);

    cad_orig = to_string(real_redond);
    cad_nueva = ElimaUltimos(cad_orig, a_borrar);

    return cad_nueva;
}

int main(){
    double real;
    int num_dec;
    string cad_result;

    cout << "-------------DOUBLE_TO_STRING---------------" << endl;
    cout << "Introduzca un número real: ";
    cin >> real;
    cout << "Introduzca un número de decimales: ";
    cin >> num_dec;

    cad_result = DoubleToString(real, num_dec);

    cout << "\nCadena resultante: " << cad_result << endl;
}
