#include <iostream>

using namespace std;

int main(){

    int n1, n2;
    bool se_dividen;

    cout << "Introduzca un valor entero: ";
    cin >> n1;
    cout << "Introduzca otro valor entero: ";
    cin >> n2;

    if (se_dividen =  n1 % n2 == 0 || n2 % n1 == 0){
        cout << "\nUno divide al otro" << endl;
    } else {
        cout << "\nNo son divisibles entre si" << endl;
    }
}
