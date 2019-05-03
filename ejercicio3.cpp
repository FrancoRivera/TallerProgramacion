
// < , ""
#include <iostream>

using namespace std;

int main(){
  int filas = 10;
  for (int fila = 1; fila <= filas; fila++) {
    for (int espacio = 0; espacio < filas-fila; espacio++) {
      cout << " ";
    }
    for (int estrella = 0; estrella < 2*fila-3; estrella++) {
      cout << "*";
    }
    cout << endl;
  }
  //invertir tiangulo
  for (int fila = 1; fila < filas; fila++) {
    // margen izquierdo
  for (int i = 0; i < 2*filas-3; i++) {
    cout << " ";
  }
    for (int espacio = 0; espacio < fila-1; espacio++) {
      cout << " ";
    }
    for (int estrella = 0; estrella < 20-2*fila-3; estrella++) {
      cout << "*";
    }
    cout << endl;
  }
  return 0;
}

