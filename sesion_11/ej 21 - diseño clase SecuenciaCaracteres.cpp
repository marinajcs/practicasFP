#include <iostream>
#include <string>
using namespace std;

class SecuenciaCaracteres{
private:
    static const int TAM = 100;
    char caracteres[TAM];
    int util_caract;
    /*Es preferible usar un dato miembro "util" en vez
    de utilizar un caracter terminador para simplificar las
    cosas y evitar problemas a la hora de incluir/excluir el
    terminador de la cadena cuando se trabaje con el vector
    */
public:
    void Aniade(char caract){
        ...
    }

    int Utilizados(){
        return util_caract;
    }

    char Elemento(int pos){
        return caracteres[pos];
    }

    void Invierte(){
        ...
    }

    int PrimeraOcurrencia(char car){
        ...
    }

    void EliminaOcurencias(char car){
        ... // Se debe decrementar "util_caract" tantas veces se halle dich caracter
    }
};

int main(){
    SecuenciaCaracteres secuencia;

    // Se tendrían que añadir caracteres de uno en uno con el método "Aniade"

    secuencia.Aniade('S');
    secuencia.Aniade('o');
    secuencia.Aniade('l');

    int util_secuencia = secuencia.Utilizados()

    cout << secuencia.Elemento(3); // Para visualizar los elementos del vector

    secuencia.Invierte(); // <'S' 'o' 'l'> --> <'l' 'o' 'S'>

    // Para buscar posición de la primera ocurrencia de un caracter (por ej: 'S')

    pos_char = secuencia.PrimeraOcurrencia('S') // Sería 0: secuencia[0]->'S'

    secuencia.EliminaOcurencias('l') // Quedaría: <'o' 'l'>

}
