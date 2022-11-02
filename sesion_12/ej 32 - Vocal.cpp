/* EJERCICIO 32: VOCAL
Recupere la clase SecuenciaCaracteres vista en la página RP-IV.22. Queremos ver si alguna de las letras de la secuencia es una vocal. Se plantean las siguientes cabeceras:
• bool EsVocal(int indice)
• bool EsVocal(char caracter)
Justifique, para cada una de las dos cabeceras anteriores, si tendría sentido que fuesen una función global, un método público o un método privado e indique cómo sería
la llamada desde el programa principal (o desde cualquier sitio en general). No hace
falta que cree un programa principal de prueba ni tampoco hace falta que implemente
el método.
*/

class SecuenciaCaracteres{
private:
    ...
public:
    ...
};

int main(){
    SecuenciaCaracteres secuencia;
    int indice = 2;
    char letra = 'e';

    bool es_vocal = secuencia.EsVocal(indice);

    /*Puede ser un método tanto público como privado de
    la clase SecuenciaCaracteres, aplicado a un objeto
    "secuencia"
    */

    es_vocal = secuencia.EsVocal(letra) // "=" EsVocal(letra)

    /*No tiene sentido aplicarlo sobre un objeto ya que
    sigue cumpliendo su función si se suprime el objeto
    "secuencia"
    */

    EsVocal(letra) // Como función global, sí tiene sentido
}
