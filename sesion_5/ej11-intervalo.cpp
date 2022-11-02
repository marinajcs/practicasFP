#include <iostream>

using namespace std;

int main(){

    double a, b, val;
    char ext_izq, ext_dch, coma;

    cout << "Introduzca el intervalo: \n";
    cin >> ext_izq >> a >> coma >> b >> ext_dch;
    cout << "Introduzca un valor real: \n";
    cin >> val;

    bool ms_car = (ext_izq == '(' && ext_dch == ')') || (ext_izq == '[' && ext_dch == ']');
    bool en_int;

    if (ms_car){
        if (ext_izq == '(')
            en_int = val > a && val < b;
        else
            en_int = val >= a && val <= b;
    }else{
        if (ext_izq == '(')
            en_int = val > a && val <= b;
        else
            en_int = val >= a && val < b;
    }
    if (en_int)
        cout << "\nEl valor " << val << " esta dentro del intervalo " << ext_izq << a << coma << b << ext_dch << endl;
    else
        cout << "\nEl valor " << val << " no esta dentro del intervalo " << ext_izq << a << coma << b << ext_dch << endl;
}
