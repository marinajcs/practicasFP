1. [Errores en funciones] Encuentre los errores, si los hubiese,
de las siguientes funciones. Indique qu� har�a para que funcionasen
correctamente. No es necesario que construya ning�n programa.
Entregue �nicamente un fichero de texto.

a) int ValorAbsoluto(int entero){
        if (entero < 0)
            entero = -entero;
        else
            return entero;
   }

a) Si entero < 0, NO devuelve el valor absoluto de dicho n�mero,
   ya que el "return" solo est� definido en el else.

   Para corregirlo, har�a lo siguiente:

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

b) Una funci�n deber�a devolver siempre un valor o
   podr�a dar lugar a un error l�gico y un comportamiento
   indeterminado.

   Para corregirlo se har�a lo siguiente:

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

c) No parece haber ning�n error, pues al truncar
   el double se evita que se produzca un desbordamiento
