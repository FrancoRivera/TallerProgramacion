// ejercicio3.cpp
// Se prefiere utlilzar <> a "" cuando se incluyen bibliotecas estandar

#include <iostream>

//incluye el nombre std para no escribir std::cout;
using namespace std;

int main(){

  //cantidad de filas fija
  int filas = 10;

  //iterar las filas
  for (int fila = 0; fila <= filas; fila++) {

    // imprimir espacios antes de las estrellas
    for (int espacio = 0; espacio < filas-fila; espacio++) {
      cout << " ";
    }
    //imprimir las estrellas
    for (int estrella = 0; estrella < 2*fila-1; estrella++) {
      cout << "*";
    }
    //salto de linea
    cout << endl;
  }

  // ahora es lo mismo pero se invierte el triangulo
  for (int fila = 1; fila <= filas; fila++) {

    // margen izquierdo
    for (int i = 0; i < 2*filas-1; i++) {
      cout << " ";
    }

    // imprimir espacios antes de las estrellas
    for (int espacio = 0; espacio <= fila-1; espacio++) {
      cout << " ";
    }
    //imprimir las estrellas
    for (int estrella = 0; estrella < 20-(2*fila-1); estrella++) {
      cout << "*";
    }
    // salto de linea
    cout << endl;
  }
  return 0;
}

