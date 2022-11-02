#include <iostream>
using namespace std;

class Dinero{
private:
    int euros, cents;
public:
    void SetEurCent(int eur, int cent){
        const int EUR_EN_CENT = 100;

        euros = eur + cent/EUR_EN_CENT;

        if(cent >= EUR_EN_CENT)
            cents = cent%EUR_EN_CENT;
        else
            cents = cent;
    }

    int Euros(){
        return euros;
    }

    int Cents(){
        return cents;
    }
};

int main(){
    Dinero prec_prod_1, prec_prod_2;
    int euros, cents;

    cout << "----------------DINERO CON DATOS PRIVADOS---------------";
    cout << "\nIntroduzca el precio del producto 1 (euros y cents):\n";
    cin >> euros >> cents;

    prec_prod_1.SetEurCent(euros, cents);

    cout << "Introduzca el precio del producto 2 (euros y cents):\n";
    cin >> euros >> cents;

    prec_prod_2.SetEurCent(euros, cents);

    // Producto 3: suma de prod 1 y prod 2.

    Dinero prec_prod_3;
    int sum_eur, sum_cent;

    sum_eur = prec_prod_1.Euros() + prec_prod_2.Euros();
    sum_cent = prec_prod_1.Cents() + prec_prod_2.Cents();

    prec_prod_3.SetEurCent(sum_eur, sum_cent);

    cout << "\nEl precio del tercer producto es: "
         << prec_prod_3.Euros() << " euros y "
         << prec_prod_3.Cents() << " céntimos." << endl;
}
