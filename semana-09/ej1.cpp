
/*
**┌──────────┐
**│ Includes │
**└──────────┘
*/

// input y output del usuario
#include <math.h>

//math
#include <iostream>

// para no escribir std::
using namespace std;

/*
**┌──────────────────┐
**│ Helper functions │
**└──────────────────┘
*/


// esta funcion es para verificar si dos numeros son iguales
bool assertFloatEqual(float a, float b){
    cout << "==========================" << endl;

  if (a == b) cout << "PASS: " << a << " is " << b << endl;
  else cout << "FAILED: Got: " << a << " expected: " << b << endl;
    cout << "==========================" << endl;
  return a == b;
}


int factorialConFor(int n){
  int resultado = 1;
  for (int i = 1; i <= n; i++) {
    resultado *= i;
  }
  return resultado;
}

int factorialRecursivo(int n){
  // condicion de quiebre (o base)
  if (n == 1) return n;
  //recursividad
  return n * factorialRecursivo(n-1);
}


/*
**┌───────────┐
**│ Funciones │
**└───────────┘
*/


// funcion retorna la cantidad de pares en un numero utilizando módulos
// Ej. numero = 12345678
// 1. es mayor a 0 asi que sigue
// 2. numero % 10  = 8
// 3. ult digito es 8, comprobar si ese numero es divisible por 2
// 4. continuar con numero / 10 o sea 1234567
//
int cantPares(int numero){
  // si es par es divisible entre 2
  // contador
  int pares = 0;
  while(numero > 0){
    int ult_digito = numero % 10;

    // si es divisible por 2 aumentar el nnumero de pares
    if (ult_digito % 2 == 0) { pares++; }

    //quitar el ultimo digito y dividir por 10
    numero /= 10;
  }
  return pares;
}



// arg n:  la cantidad de nnumeros en la serie
// arg y:  una constante aribitrarea entre 1.2 y 3.6
float calculoSerie(int n, int y){
  // Sumatoria empieza en 1
  float s = 1;
  if (n==1) return 1;
  for(int i = 2; i <= n; i++){
    //calcula la serie
    //calcula numero
    int num = (2 * i - 1);
    float valor = (num * pow(y,num-1)) / (factorialRecursivo(num)*1.0);
    if (i % 2 == 0) s -=  valor;
    else s +=  valor;

  }

  return s;
}

// menu

int menu(){
  int option = 3;
  cout << "\n\n\n\n\n";
  cout << "==========================" << endl;
  cout << "          MENU            " << endl;
  cout << "==========================" << endl;

  cout << "1. Halla los n terminos de la serie" << endl;
  cout << "2. Halla la cantidad de pares" << endl;
  cout << "3. Correr Pruebas " << endl;
  cout << "4. Salir " << endl;

  cin >> option;

  if (option <= 3) return option;
  // recursividad paramostrar el menu
  else return menu();
}
/*
**┌───────────────┐
**│ Main function │
**└───────────────┘
*/


void runTests(){
  // Given
  int y = 2;
  int n = 2;
  int n2 = 3;

  // When
  float ans_1 = calculoSerie(n, y);
  float ans_2 = calculoSerie(n2, y);

  // Then
  assertFloatEqual(ans_1, -1);

  //test cant pares funcion
  assertFloatEqual(cantPares(12345678), 4);
  assertFloatEqual(cantPares(1111111), 0);
  assertFloatEqual(cantPares(2222222), 7);

  //test factorial for;
  assertFloatEqual(factorialConFor(4), 24);

  // test factorial recursivo;
  assertFloatEqual(factorialRecursivo(5), 120);
}

int main(){
  int option = menu();
  int numero = -1;
  int y = -1;
  switch(option){
    case 1:

  // comprobar que n > 0
      while(numero < 1){
	cout << "Ingresa el valor de N (N > 0): " << endl;
	cin >> numero;
      }
      while(y <= 1.6 || y >= 3.6){
  //comprobar que 1.2 < "y" < 3.6
      cout << "Ingresa el valor de Y (1.6 < y < 3.6): " << endl;
      cin >> y;
      }
      cout << calculoSerie(numero, y);
      break;
    case 2:
  // comprobar que n > 0
      numero = -1;
      while(numero < 1){
	cout << "Ingresa el numero que deseas calcular la cant de pares (n>0) " << endl;
	cin >> numero;
      }
      cout << cantPares(numero) << endl;
      break;
      // si la opción es la 3 acabar el programa
    case 3:
      runTests();
      break;
    case 4:
      break;
    default:
      break;
  }


  // thanks for using this


}

