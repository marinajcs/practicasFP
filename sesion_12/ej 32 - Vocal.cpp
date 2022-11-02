/* EJERCICIO 32: VOCAL
Recupere la clase SecuenciaCaracteres vista en la p�gina RP-IV.22. Queremos ver si alguna de las letras de la secuencia es una vocal. Se plantean las siguientes cabeceras:
� bool EsVocal(int indice)
� bool EsVocal(char caracter)
Justifique, para cada una de las dos cabeceras anteriores, si tendr�a sentido que fuesen una funci�n global, un m�todo p�blico o un m�todo privado e indique c�mo ser�a
la llamada desde el programa principal (o desde cualquier sitio en general). No hace
falta que cree un programa principal de prueba ni tampoco hace falta que implemente
el m�todo.
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

    /*Puede ser un m�todo tanto p�blico como privado de
    la clase SecuenciaCaracteres, aplicado a un objeto
    "secuencia"
    */

    es_vocal = secuencia.EsVocal(letra) // "=" EsVocal(letra)

    /*No tiene sentido aplicarlo sobre un objeto ya que
    sigue cumpliendo su funci�n si se suprime el objeto
    "secuencia"
    */

    EsVocal(letra) // Como funci�n global, s� tiene sentido
}
