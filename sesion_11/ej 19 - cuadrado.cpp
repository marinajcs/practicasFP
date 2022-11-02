#include <iostream>
#include <string>
using namespace std;

class Cuadrado{
private:
    double x, y;
    double longitud;
    /* Como el área y el perímetro se pueden hallar a partir
    de los datos miembros de arriba, no se incluyen aquí */

public:
    void SetCoordXY(double abs, double ord){
        x = abs;
        y = ord;
    }

    void SetLongitud(double lado){
        longitud = lado;
    }

    double Area(){
        return longitud * longitud;
    }

    double Perimetro(){
        return 4 * longitud;
    }

    double GetX(){
        return x;
    }

    double GetY(){
        return y;
    }

    double Longitud(){
        return longitud;
    }
};

int main(){
    const string MSJ_COORDENADAS = "\nCoordenadas: ";
    const string MSJ_LONGITUD = "\nLongitud: ";
    const string MSJ_AREA = "\nÁrea: ";
    const string MSJ_PERIMETRO = "\nPerímetro: ";
    double esquina_x, esquina_y, long_parcela;

    cout << "-------------------------CLASE CUADRADO------------------------" << endl;
    cout << "Introduzca los datos de DOS cuadrados:"
         << "\nPrimero las dos coordenadas de la esquina inferior izquierda"
         << "\nA continuación, la longitud de su lado\n";

    cin >> esquina_x;
    cin >> esquina_y;
    cin >> long_parcela;

    Cuadrado parcela;

    parcela.SetCoordXY(esquina_x, esquina_y);
    parcela.SetLongitud(long_parcela);

    cin >> esquina_x;
    cin >> esquina_y;
    cin >> long_parcela;

    Cuadrado otra_parcela;

    otra_parcela.SetCoordXY(esquina_x, esquina_y);
    otra_parcela.SetLongitud(long_parcela);

    cout << "\n-------Cuadrado 1:-------";
    cout << MSJ_COORDENADAS << parcela.GetX() << ", " << parcela.GetY()
         << MSJ_LONGITUD << parcela.Longitud()
         << MSJ_AREA << parcela.Area()
         << MSJ_PERIMETRO << parcela.Perimetro();

    cout << endl;

    cout << "\n-------Cuadrado 2--------";
    cout << MSJ_COORDENADAS << otra_parcela.GetX() << ", " << otra_parcela.GetY()
         << MSJ_LONGITUD << otra_parcela.Longitud()
         << MSJ_AREA << otra_parcela.Area()
         << MSJ_PERIMETRO << otra_parcela.Perimetro() << endl;
}
