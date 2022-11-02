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
    //Constructor inicializa coordenadas y longitud
    Cuadrado(double coord_x, double coord_y, double long_)
        :x(coord_x),
         y(coord_y),
         longitud(long_)
    {
    }

    void SetCoordXY(double coord_x, double coord_y){
        x = coord_x;
        y = coord_y;
    }

    void SetLongitud(double long_lado){
        longitud = long_lado;
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
    cout << "Introduzca los datos de dos cuadrados:"
         << "\nPrimero las dos coordenadas de la esquina inferior izquierda"
         << "\nA continuación, la longitud de su lado\n";

    cin >> esquina_x;
    cin >> esquina_y;
    cin >> long_parcela;

    // SE crean los objetos tras la lectura de datos

    Cuadrado parcela(esquina_x, esquina_y, long_parcela);

    cin >> esquina_x;
    cin >> esquina_y;
    cin >> long_parcela;

    Cuadrado otra_parcela(esquina_x, esquina_y, long_parcela);

    double co_x_parcela, co_y_parcela, long_parcela_;

    co_x_parcela = parcela.GetX();
    co_y_parcela = parcela.GetY();
    long_parcela_ = parcela.Longitud();

    double area_parcela, perim_parcela;

    area_parcela = parcela.Area();
    perim_parcela = parcela.Perimetro();

    cout << MSJ_COORDENADAS << co_x_parcela << ", " << co_y_parcela
         << MSJ_LONGITUD << long_parcela_
         << MSJ_AREA << area_parcela
         << MSJ_PERIMETRO << perim_parcela;

    cout << endl;

    double co_x_otra_parc, co_y_otra_parc, long_otra_parc;

    co_x_otra_parc = otra_parcela.GetX();
    co_y_otra_parc = otra_parcela.GetY();
    long_otra_parc = otra_parcela.Longitud();

    double area_otra_parc, perim_otra_parc;

    area_otra_parc = otra_parcela.Area();
    perim_otra_parc = otra_parcela.Perimetro();

    cout << MSJ_COORDENADAS << co_x_otra_parc << ", " << co_y_otra_parc
         << MSJ_LONGITUD << long_otra_parc
         << MSJ_AREA << area_otra_parc
         << MSJ_PERIMETRO << perim_otra_parc << endl;
}
