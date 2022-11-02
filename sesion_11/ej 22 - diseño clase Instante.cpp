#include <iostream>
using namespace std;

class Instante{
private:
    int hor, mins, seg; // en C++11 se pueden inicializar a 0 aquí
public:
    // O bien con un constructor que inicialice los datos miembros a 0
    /*Instante(int ...)
        :hor(...)
        ...
    {
    }
    */

    void SetHorMinSeg(int h, int m, int s){
        ...
    }

    void SetSegTotales(int seg_totales){
        ... // Transformar de seg a horas y mins
    }

    int Horas(){
        return hor;
    }

    int Minutos(){
        return mins;
    }

    int Segundos(){
        return seg;
    }

    int SegTotales(){
        ...
    }

    int MinTotales(){
        ...
    }
};

int main(){
    Instante un_inst;

    un_inst.SetHorMinSeg(1, 20, 30);

    cout << un_inst.MinTotales(); // Desde instante 0h 0min 0s hasta "un_inst"
    cout << un_inst.SegTotales();

    un_inst.SetSegTotales(3600);

    // En el caso de arriba, se asigna automáticamente: 1h 0min 0s a "un_inst"

}
