// ejercicio1.cpp
// Se prefiere utlilzar <> a "" cuando se incluyen bibliotecas estandar

#include <iostream>

//incluye el nombre std para no escribir std::cout;
using namespace std;

// Calcular numero de Euler usando la serie
int main(){

  // variables
  int n;
  float suma = 0;

  //capturamos n
  do{
    cout << "Ingresar un número N: ";
    cin >> n;
    //n debe ser positivo menor a 120
  }while(n < 0 && n < 120);

  // iterar la suma
  for (int i = 1; i <= n; i++){

    // iterar para hallar el factorial
    int factorial = 1;
    for (int j = 1; j <= i; j++){
      // hallar el factorial
      factorial = factorial*j;
    }
    //suma de euler segun ejercicio
    // notar *1.0 para convertir resultado
    // en numero Float
    suma = suma + (i*i)/(2*factorial*1.0);
  }
  //imprimir en consola
  cout << " La sumatoria es: " << suma << endl;
  return 0;
}
