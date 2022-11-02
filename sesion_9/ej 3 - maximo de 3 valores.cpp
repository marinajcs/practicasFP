#include <iostream>
using namespace std;

int Max2(int a, int b){
    int max_2;

    if (a > b)
        max_2 = a;
    else
        max_2 = b;

    return max_2;
}

int Max3(int a, int b, int c){
    int max_3;

    if (c > Max2(a,b))
        max_3 = c;
    else
        max_3 = Max2(a,b);

    return max_3;
}

int main(){
    int n1, n2, n3;
    int maximo;

    cout << "Introduzca 3 números enteros cualquiera: " << endl;
    cin >> n1 >> n2 >> n3;

    maximo = Max3(n1, n2, n3);

    cout << "\nEl máximo es: " << maximo << endl;
}
