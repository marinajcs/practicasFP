1. [Errores en funciones] Encuentre los errores, si los hubiese,
de las siguientes funciones. Indique qué haría para que funcionasen
correctamente. No es necesario que construya ningún programa.
Entregue únicamente un fichero de texto.

a) int ValorAbsoluto(int entero){
        if (entero < 0)
            entero = -entero;
        else
            return entero;
   }

a) Si entero < 0, NO devuelve el valor absoluto de dicho número,
   ya que el "return" solo está definido en el else.

   Para corregirlo, haría lo siguiente:

   int ValorAbsoluto(int entero){
        if (entero < 0)
            entero = -entero;
        return entero;
   }

-----------------------------------------------------

b) bool EsPositivo(int valor){
        if (valor > 0)
            return true;
   }

b) Una función debería devolver siempre un valor o
   podría dar lugar a un error lógico y un comportamiento
   indeterminado.

   Para corregirlo se haría lo siguiente:

   bool EsPositivo(int valor){
        bool es_positivo = valor > 0;
        return es_positivo;
   }

-------------------------------------------------------

c) long ParteEntera(double real){
        int parte_entera;

        parte_entera = trunc(real);

        return parte_entera;
   }

c) No parece haber ningún error, pues al truncar
   el double se evita que se produzca un desbordamiento
