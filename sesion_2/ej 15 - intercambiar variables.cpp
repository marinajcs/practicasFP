#include <iostream>

using namespace std;

int main(){

    int izq = 150;
    int dcha = 20;
    int copia_izq;

    /*Si se pone izq=dcha y luego dcha=izq se pierde el valor original
    de izq, por tanto, se crea una variable auxiliar (copia_izq) para
    guardar el valor de izq, que más tarde se le asiganará a dcha*/

    copia_izq = izq;
    izq = dcha;
    dcha = copia_izq;

    cout << "La caja izquierda tiene " << izq << " euros" << endl;
    cout << "La caja derecha tiene " << dcha << " euros" << endl;

}
