#include <iostream>
using namespace std;

int main(){
    const int TERM_NOTA = -1;
    const int FIN = 0;
    int cod_alumn;
    double nota;
    int num_notas = 0;

    cout << "Introduzca codigo del alumno: ";
    cin >> cod_alumn;

    int mejor_alumn = cod_alumn;
    double media = 0;
    double med_alta = media;
    double suma;


    while (cod_alumn != FIN){
        num_notas = 0;
        suma = 0;
        media = 0;

        cout << "Introduzca nota del alumno: ";
        cin >> nota;

        while (nota != TERM_NOTA){
            num_notas++;
            suma = suma + nota;

            cout << "Introduzca nota del alumno: ";
            cin >> nota;
        }

        media = suma / num_notas;

        if (media > med_alta){
            med_alta = media;
            mejor_alumn = cod_alumn;
        }

        cout << "Introduzca codigo del alumno: ";
        cin >> cod_alumn;
    }

    cout << "\nEl alumno con codigo " << mejor_alumn << " tiene la media mas alta: " << med_alta << endl;
}
