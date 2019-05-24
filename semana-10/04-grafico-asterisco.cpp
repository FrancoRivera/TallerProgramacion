#include <iostream>
using namespace std;

// definimos lasfunciones antes paranomover el codigo
void imprimirCaracter(int n, int cant);
void imprimirEspacios(int cant_espacios);

void Graficar1(int n){
  for (int filas = 1; filas <= (n-1); filas++){
    imprimirEspacios(filas-1);
    cout << n;
    imprimirEspacios(n-filas-1);
    cout << n;
    imprimirEspacios(n-filas-1);
    cout << n << endl;
  }
  imprimirCaracter(2*n-1, n);
  // parte de abajoo
  for (int filas = n-1; filas >= 1; filas--){
    imprimirEspacios(filas-1);
    cout << n;
    imprimirEspacios(n-filas-1);
    cout << n;
    imprimirEspacios(n-filas-1);
    cout << n << endl;
  }
}
void imprimirEspacios(int cant_espacios){
  for (int espacios = 0; espacios < cant_espacios; espacios++){
    cout << " ";
  }
}
void imprimirCaracter(int cant, int n){
  for (int i = 0; i < cant; i++){
    cout << n;
  }
  cout << endl;
}
void Graficar2(int n){
  imprimirEspacios(n-1);
  cout << n << endl;
  // parte de abajoo
  for (int filas = n-1; filas >= 1; filas--){
    imprimirEspacios(filas-1);
    cout << n;
    imprimirEspacios(n-filas-1);
    cout << n;
    imprimirEspacios(n-filas-1);
    cout << n << endl;
  }
  imprimirCaracter(2*n-1, n);
  for (int filas = 1; filas <= (n-1); filas++){
    imprimirEspacios(filas-1);
    cout << n;
    imprimirEspacios(n-filas-1);
    cout << n;
    imprimirEspacios(n-filas-1);
    cout << n << endl;
  }
  imprimirEspacios(n-1);
  cout << n << endl;
}
int main() {

  int n = 9;
  //Graficar1(n);
  Graficar2(5);

  return 0;
}
