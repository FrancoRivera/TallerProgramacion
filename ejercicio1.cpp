

#include <iostream>

using namespace std;

// Calcular numero de Euler usando la serie
int main(){

  // variables
  int n;
  float suma = 0;

  //capturamos N
  do{
    cout << "Ingresar N: ";
    cin >> n;
    //positivo menor a 120
  }while(n < 0 && n < 120);

  // iterar la suma
  for (int i = 1; i <= n; i++){
    // iterar para hallar el factorial
    int factorial = 1;
    for (int j = 1; j <= i; j++){
      // hallar el factorial
      factorial = factorial*j;
    }
    suma = suma + (i*i)/(2*factorial*1.0);
  }
  cout << " La sumatoria es: " << suma;
  return 0;
}
