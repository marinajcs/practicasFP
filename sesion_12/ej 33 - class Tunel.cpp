// Clase Túnel

#include <iostream>
#include <cmath>
#include <string>
using namespace std;

/* Funciones globales:
      double PotenciaEntera(double base, int exponente)
      double Redondea(double real, int num_decimales)
      string EliminaUltimos(string cadena, char a_borrar)
*/

double PotenciaEntera(double base, int exponente){
	double potencia;
	int exponente_positivo;

	if (base == 0 && exponente == 0)
		potencia = NAN;				// Devuelve NAN (Indeterminación)
	else{
		exponente_positivo = abs(exponente);
		potencia = 1;

		for (int i = 1; i <= exponente_positivo; i++)
			potencia = potencia * base;
	}

	if (exponente < 0)
		potencia = 1/potencia;

	return potencia;
}

double Redondea(double real, int num_decimales){
   double real_redondeado;
   long long potencia_10;

   potencia_10 = PotenciaEntera(10, num_decimales);
   real_redondeado = round(real * potencia_10);
   real_redondeado = real_redondeado / potencia_10;

   return real_redondeado;
}

string EliminaUltimos(string cadena, char a_borrar){
   // Las modificaciones que hagamos sobre cadena NO afectan al parámetro actual.

   while (! cadena.empty() && cadena.back() == a_borrar)
      cadena.pop_back();

   return cadena;
}

// Clases neceasarias para la clase principal "Tunel"

/*
   class FormateadorDoubles
   public:
      FormateadorDoubles()  // <- Por defecto: "" a izda y dcha, punto separador y 2 cifras decimales.
      FormateadorDoubles(string delimitador_izda,
                         string delimitador_dcha,
                         int num_decimales_a_mantener)
      void SetSeparadorPunto()
      void SetSeparadorComa()
      void SetNumeroDecimales(int num_decimales_a_mantener)
      string GetCadena(double real)
*/

class FormateadorDoubles{
private:
   enum class SeparadorDecimal {PUNTO, COMA};  // <- Podemos definir un tipo enumerado PRIVADO
   string izda    = "";  // Valor por defecto. Se puede cambiar en el constructor pero no una vez creado el objeto
   string dcha    = "";  // Valor por defecto. Se puede cambiar en el constructor pero no una vez creado el objeto
   int decimales  = 2;   // Valor por defecto. Se puede cambiar una vez creado el objeto
   SeparadorDecimal separador = SeparadorDecimal::PUNTO;   // Valor por defecto. Se puede cambiar una vez creado el objeto

   void SetDelimitadores(string delimitador_izda, string delimitador_dcha){
      izda = delimitador_izda;
      dcha = delimitador_dcha;
   }

public:
   FormateadorDoubles(){
   }

   FormateadorDoubles(string delimitador_izda,
                      string delimitador_dcha)
   {
      SetDelimitadores(delimitador_izda, delimitador_dcha);
   }

   FormateadorDoubles(string delimitador_izda,
                      string delimitador_dcha,
                      int num_decimales_a_mantener)
      :FormateadorDoubles(delimitador_izda, delimitador_dcha)
   {
      SetNumeroDecimales(num_decimales_a_mantener);
   }

   void SetSeparadorPunto(){
      separador = SeparadorDecimal::PUNTO;
   }
   void SetSeparadorComa(){
      separador = SeparadorDecimal::COMA;
   }

   void SetNumeroDecimales(int num_decimales_a_mantener){
      if (num_decimales_a_mantener >= 0)
         decimales = num_decimales_a_mantener;
   }

   string GetCadena(double real){
      const int MAX_DIGITOS_PRECISION_DOUBLE = 15;
      int parte_entera;
      int num_digitos_precision;
      string cadena_separador;
      string cadena;

      if (real < 0)
         cadena = "-";

      real = abs(real);
      real = Redondea(real, decimales);
      parte_entera = trunc(real);
      cadena = cadena + to_string(parte_entera);
      num_digitos_precision = cadena.size();

      if (real != parte_entera
         && decimales > 0
         && num_digitos_precision < MAX_DIGITOS_PRECISION_DOUBLE){

         if (separador == SeparadorDecimal::PUNTO)
            cadena_separador = ".";
         else
            cadena_separador = ",";

         cadena = cadena + cadena_separador;

         for (int i = 0; i < decimales && num_digitos_precision < MAX_DIGITOS_PRECISION_DOUBLE; i++){
            real = Redondea(real - parte_entera, decimales);
            real = real * 10;
            parte_entera = trunc(real);
            cadena = cadena + to_string(parte_entera);
            num_digitos_precision++;
         }

         while (cadena.back() == '0')
            cadena.pop_back();
      }

      cadena = izda + cadena + dcha;

      return cadena;
   }
};
/* Esquema class Instante
      Instante(int hora_instante, int minuto_instante, int segundo_instante)
      Instante(int segundos_totales)
      Instante()
      int Hora()
      int Minuto()
      int Segundo(){
      void SetHoraMinutoSegundo(int hora_instante,
                                int minuto_instante,
                                int segundo_instante)
      void SetSegundosTotales(int segundos_totales)
      void SumaleSegundos(int segundos_a_aniadir)
      void RestaleSegundos(int segundos_a_quitar)
      bool EsNulo()
      int SegundosTotales()
      int MinutosTotales()
      double MinutosTotalesDecimal()
      double HorasTotalesDecimal()
      string ToString()
*/

class Instante{
private:
   static const int  SEG_1_MIN = 60,
                     MIN_1_HORA = 60,
                     HOR_1_DIA = 24;

   int hor = -1;
   int mins = -1;
   int seg = -1;

   bool EsCorrectoSeg(int segundo){
      return 0 <= segundo && segundo < SEG_1_MIN;
   }
   bool EsCorrectoMin(int minuto){
      return 0 <= minuto && minuto < MIN_1_HORA;
   }
   bool EsCorrectoHor(int hora){
      return 0 <= hora  && hora < HOR_1_DIA;
   }
   bool EsCorrecto (int hora, int minuto, int segundo){
      return  EsCorrectoHor(hora) &&
              EsCorrectoMin(minuto) &&
              EsCorrectoSeg(segundo);
   }

public:
   // Al construir un objeto Instante llamando al constructor sin parámetros
   // éste se quedará como un "zombie". Lo identificaremos poniendo sus datos miembro
   // a -1 y proporcionando el método EsNulo()

   Instante(){
   }

   // Prec: las horas, minutos y segundos son correctos
   Instante(int hora, int minuto, int segundo){
      SetHoraMinutoSegundo(hora,  minuto,  segundo);
   }

   // Prec: los segundos son correctos
   Instante(int segundos_totales){
      SetSegundosTotales(segundos_totales);
   }

   int Hora(){
      return hor;
   }

   int Minuto(){
      return mins;
   }

   int Segundo(){
      return seg;
   }

   void SetHoraMinutoSegundo(int hora, int minuto, int segundo){
      if (EsCorrecto(hora, minuto, segundo)){
         hor = hora;
         mins = minuto;
         seg = segundo;
      }
   }

   void SetSegundosTotales(int segundos_totales){
      int minutos_enteros;
      const int SEG_1_DIA = SEG_1_MIN * MIN_1_HORA * HOR_1_DIA;

      if (segundos_totales < SEG_1_DIA){
         seg = segundos_totales % SEG_1_MIN;
         minutos_enteros  = segundos_totales / SEG_1_MIN;
         mins  = minutos_enteros % MIN_1_HORA;
         hor  = minutos_enteros / MIN_1_HORA;
      }
   }

   void SumaleSegundos(int segundos_a_aniadir){
      if (segundos_a_aniadir > 0)
         SetSegundosTotales(
            SegundosTotales()
            +
            segundos_a_aniadir);
   }

   void RestaleSegundos(int segundos_a_quitar){
      if (segundos_a_quitar > 0)
         SetSegundosTotales(
            SegundosTotales()
            -
            segundos_a_quitar);
   }

   bool EsNulo(){
      return !EsCorrecto(hor, mins, seg);
   }

   int SegundosTotales(){
      return seg  +  SEG_1_MIN*(hor * MIN_1_HORA + mins);
   }

   int MinutosTotales(){
      return trunc(MinutosTotalesDecimal());
   }

   double MinutosTotalesDecimal(){
      return 1.0 * SegundosTotales() / SEG_1_MIN;
   }

   double HorasTotalesDecimal(){
      return 1.0 * MinutosTotalesDecimal() / MIN_1_HORA;
   }

   string ToString(){
      return to_string(hor) + "h, " +
             to_string(mins) + "\', " +
             to_string(seg) + "\'\'";
   }
};


/* Esquema class Tunel:

   - double distancia_km
   - vectores (matriculas, entradas, salidas) y sus respectivos tamaños
   - int total_entradas
   - static const int INSTANTE_NULO
   - bool HaSalido(int indice)  [comprueba si vehículo tiene seg_salida asignado]

   + void Tunel() [constructor sin parámetros]
   + void SetDistanciaKm(double long_tunel)
   + int TotalEntradas()
   + void Entra(string matr, int h, int m, int s)
   + void Sale(string matr, int h, int m, int s)
   + int Entrada(int indice)
   + int Salida(int indice)
   + string Matricula(int indice)
   + double VelocidadMedia(int indice)
   + void ImprimeInforme()  [opcional. Imprime matr y velocidad de cada vehículo]
*/

class Tunel{
private:
   double distancia_km;

   static const int MAX_NUM_VEHICULOS = 100;
   string matriculas[MAX_NUM_VEHICULOS];
   int entradas[MAX_NUM_VEHICULOS];
   int salidas[MAX_NUM_VEHICULOS];
   int total_entradas = 0;

   static const int NULO = -1;

   bool HaSalido(int indice){
      return Salida(indice) != NULO;
   }

   int BuscaPosMatricula(string matricula){
      int pos, i;
      bool matr_encont = false;

      for(i = 0; i < total_entradas && !matr_encont; i++){
         if (matricula == matriculas[i]){
            pos = i;
            matr_encont = true;
         }
      }
      if (!matr_encont)
         pos = NULO;

      return pos;
   }

public:
   // Constructor sin parámeteros, inicializa vectores al valor NULO
   Tunel(){
       for(int i = 0; i < MAX_NUM_VEHICULOS; i++){
          entradas[i] = NULO;
          salidas[i] = NULO;
       }
   }

   void SetDistanciaKm(double long_tunel){
      distancia_km = long_tunel;
   }

    int TotalEntradas(){
      return total_entradas;
   }

   void Entra(string matricula, int hora, int minuto, int segundo){
      int seg_totales, pos_entr;

      if (total_entradas < MAX_NUM_VEHICULOS){
         Instante inst_ent;
         inst_ent.SetHoraMinutoSegundo(hora, minuto, segundo);
         seg_totales = inst_ent.SegundosTotales();

         pos_entr = BuscaPosMatricula(matricula);

         if (pos_entr == NULO){
            matriculas[total_entradas] = matricula;
            entradas[total_entradas] = seg_totales;
            total_entradas++;
         }else{
            entradas[pos_entr] = seg_totales;
            salidas[pos_entr] = NULO;
         }
      }
   }

   void Sale(string matricula, int hora, int minuto, int segundo){
      int seg_totales, pos_sal;
      Instante inst_sal;

      inst_sal.SetHoraMinutoSegundo(hora, minuto, segundo);
      seg_totales = inst_sal.SegundosTotales();

      pos_sal = BuscaPosMatricula(matricula);

      if (pos_sal != NULO)
         salidas[pos_sal] = seg_totales;
   }

   int Entrada(int indice){
      return entradas[indice];
   }

   int Salida(int indice){
      return salidas[indice];
   }

   string Matricula(int indice){
      return matriculas[indice];
   }

   double VelocidadMedia(int indice){
      int seg_ini = Entrada(indice);
      int seg_fin = Salida(indice);

      if(HaSalido(indice)){
         int seg_total = seg_fin - seg_ini;
         double hor_total, vel_media;

         Instante inst;
         inst.SetSegundosTotales(seg_total);

         hor_total = inst.HorasTotalesDecimal();
         vel_media = distancia_km / hor_total;

         return vel_media;
      }
   }

   void ImprimeInforme(){
      FormateadorDoubles vel_media("", " km/h", 1);

      for (int i = 0; i < total_entradas; i++){
         cout << "\nMatrícula: " << Matricula(i);

         if (HaSalido(i))
            cout << "\nVelocidad: " << vel_media.GetCadena(VelocidadMedia(i)) << endl;
         else
            cout << "\nVelocidad: No ha salido." << endl;
      }
   }
};

int main(){
   const char FIN_ENTRADA = '#';
   const char ENTRADA = 'E';
   const char SALIDA  = 'S';
   char acceso;
   bool error_lectura;

   string matricula;
   double long_tunel;
   int hora, mins, seg;

   cout << "------------------CLASE TÚNEL------------------" << endl;
   cout << "Introduzca la longitud del túnel y los datos\n"
        << "de cada vehículo (acceso, matrícula e instante\n"
        << "[hora, min, seg]. Terminador: #" << endl;
   cin >> long_tunel;

   Tunel tunel;
   tunel.SetDistanciaKm(long_tunel);

   cin >> acceso;
   error_lectura = false;

   while (acceso != FIN_ENTRADA && !error_lectura){
      cin >> matricula;
      cin >> hora >> mins >> seg;

      if (acceso == ENTRADA)
         tunel.Entra(matricula, hora, mins, seg);
      else if (acceso == SALIDA)
         tunel.Sale(matricula, hora, mins, seg);
      else
         error_lectura = true;

      cin >> acceso;
   }

   if (error_lectura)
      cout << "\nSe produjo un error en la lectura. ";
   else
      tunel.ImprimeInforme();
}

   // longitud_túnel  <entrada_o_salida  Matrícula# Instante> ... #

// Entrada:
/*
3.4
E 4733MTI 0 0 13
E 5232LTL 0 1 19
S 4733MTI 0 1 36
E 3330PRB 0 2 40
S 5232LTL 0 3 25
#
*/

// Salida:
/*
Matrícula:      4733MTI
Velocidad:      147.5 km/h

Matrícula:      5232LTL
Velocidad:      97.1 km/h

Matrícula:      3330PRB
Velocidad:      No ha salido
*/

