/**
  * @file diccionario.cpp
  * @brief Programa para listar un diccionario tras barajar
  *
  * @author Marina J. Carranza
  * @date Diciembre-2020
  *
  * El programa es un ejemplo de uso de string y vectores-C con n�meros aleatorios
  *
  * El programa no usar� el tipo vector de char, aunque s� el vector-C con objetos de
  * tipo string. Deber� crear un vector con el siguiente contenido:
  *       "caballero",  "Dulcinea",   "historia",   "escudero",
  *       "rocinante",  "adelante",   "gobernador", "andantes",
  *       "voluntad",   "capitulo",   "menester",   "doncella",
  *       "caballeria", "castillo",   "Fernando",   "finalmente",
  *       "aventura",   "hermosura",  "palabras",   "gobierno",
  *       "intencion",  "cardenio",   "pensamientos", "Luscinda",
  *       "lagrimas",   "aposento",   "aventuras",  "quisiera",
  *       "libertad",   "desgracia",  "entendimiento", "pensamiento",
  *       "licencia",   "Mercedes",   "semejantes", "silencio",
  *       "valeroso",   "doncellas",  "labrador",   "caballerias",
  *       "cristiano",  "cristianos", "discreto",   "hicieron",
  *       "llegaron",   "quisiere",   "espaldas",   "muestras",
  *       "escuderos",  "discurso",   "grandeza",   "altisidora",
  *       "princesa",   "haciendo",   "renegado",   "provecho",
  *       "quedaron",   "resolucion", "presente",   "encantadores",
  *       "enamorado",  "valiente",   "encantado",  "molino",
  *       "licenciado", "necesidad",  "responder",  "discrecion",
  *       "ejercicio",  "hacienda",   "posadero",   "rocinante",
  *       "presencia",  "historias",  "presentes",  "verdadero"
  *
  * A continuaci�n, deber� barajar las entradas del vector. Para ello, puede hacer tantos
  * intercambios como palabras tiene el diccionario. Un intercambio consiste en seleccionar
  * dos posiciones e intercambiar los contenidos de las dos casillas del vector.
  *
  * Finalmente, tendr� que listar el nuevo diccionario, con las mismas palabra pero en
  * distinto orden. Adem�s, para cada palabra, debe dibujar tantos guiones como letras tenga
  * debajo. Por ejemplo, el listado puede comenzar as�:
  *       1.- caballero
  *           ---------
  *       2.- Dulcinea
  *           --------
  *       3.- valiente
  *           --------
  *       4.- valeroso
  *           --------
  *
  * y terminar:
  *       74.- licenciado
  *            ----------
  *       75.- escudero
  *            --------
  *       76.- provecho
  *            --------
  *
  */

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

void ImprimeDecor(string palabra, int n){
    int num_car = palabra.size();
    int num_digitos = 0;
    int num_esp;

    while(n !=0){
        n = n/10;
        num_digitos++;
    }

    num_esp = num_digitos + 3;

    for (int i = 0; i < num_esp; i++)
        cout << " ";
    for(int i = 0; i < num_car; i++)
        cout << "-";
};

int main(){
    string lista[] = {"caballero",  "Dulcinea",   "historia",   "escudero",
    "rocinante",  "adelante",   "gobernador", "andantes",
    "voluntad",   "capitulo",   "menester",   "doncella",
    "caballeria", "castillo",   "Fernando",   "finalmente",
    "aventura",   "hermosura",  "palabras",   "gobierno",
    "intencion",  "cardenio",   "pensamientos", "Luscinda",
    "lagrimas",   "aposento",   "aventuras",  "quisiera",
    "libertad",   "desgracia",  "entendimiento", "pensamiento",
    "licencia",   "Mercedes",   "semejantes", "silencio",
    "valeroso",   "doncellas",  "labrador",   "caballerias",
    "cristiano",  "cristianos", "discreto",   "hicieron",
    "llegaron",   "quisiere",   "espaldas",   "muestras",
    "escuderos",  "discurso",   "grandeza",   "altisidora",
    "princesa",   "haciendo",   "renegado",   "provecho",
    "quedaron",   "resolucion", "presente",   "encantadores",
    "enamorado",  "valiente",   "encantado",  "molino",
    "licenciado", "necesidad",  "responder",  "discrecion",
    "ejercicio",  "hacienda",   "posadero",   "rocinante",
    "presencia",  "historias",  "presentes",  "verdadero"};

    int util_lista = sizeof(lista) / sizeof(string);
    int num1, num2;
    string aux_num1;

    srand(time(0));

    //Desordenar palabras por parejas:

    for (int j = 0; j < util_lista; j++){
        num1 = rand() % (util_lista);
        num2 = rand() % (util_lista);

        aux_num1 = lista[num1];
        lista[num1] = lista[num2];
        lista[num2] = aux_num1;
    }

    // Imprimir listado de palabras del 1 al 76

    for (int i = 0; i < util_lista; i++){
        int n = i+1;
        cout << n << ".- " << lista[i] << endl;
        ImprimeDecor(lista[i], n);
        cout << endl;
    }
}
