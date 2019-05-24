// ejercicio 1 - Serie

// headers
#include <iostream>


// namespace
using namespace std;


// Hallar primos y cantidad de primos
void Hallar_promedio_y_cantidad(unsigned long long int numero){
  // contador primos
  int primos = 0;
  // suma de primos
  int suma = 0;

  // como quitamos un numero por iteracion
  // terminar el blucle cuando me quede sin numeros
  //
  while(numero > 0){
    int ult_digito = numero % 10;
    // comprobar si el digito es primo
    if (ult_digito == 2 || ult_digito == 3||
	ult_digito == 5 || ult_digito == 7) {
      primos++;
      suma += ult_digito;
    }
    //quitar el ultimo digito y dividir por 10
    numero /= 10;
  }
  cout << primos << endl;
  cout << suma/(primos*1.0) << endl;
}

// Main
int main() {
  // your code goes here
  Hallar_promedio_y_cantidad(123456789123456789);
  return 0;
}
