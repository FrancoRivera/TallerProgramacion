
// includes

#include <iostream>

using namespace std;

int main(){

  // ancho de la consola
  int width = 80;
  //numero total de filas
  int filas = 6;

  // iterar sobre las filas
  for (int fila = 1; fila < filas; fila++) {

    // hallar cantidad de espacios 
    int espacios = (width/2)-fila;

    char caracter = ' ';

    //es impar
    if (fila % 2){
      // descomentar esta linea
      //caracter = char(179);
      caracter = 'A';
    }
    else{
      //es par
      // descomentar esta linea
      //caracter = char(196);
      caracter = 'B';
    }

    //imprime los espacios antes de la barrita
    for (int espacio = 0; espacio < espacios; espacio++) {
      cout << " ";
    }
    //imprime la barrita horizontal
    // si es la primera fila solo irpmir el ultimo
    if (fila != 1) cout << caracter;

    for (int puntos = 0; puntos < 2*fila-3; puntos++) {
      cout << ".";
    }
    cout << caracter;
    //imprime los espacios despues de la barrita
    for (int espacio = 0; espacio < espacios; espacio++) {
      cout << " ";
    }
    //imprime la siguiente linea
    cout << endl;
  }
  // para que no se cierre la consola
  cin >> filas;

return 0;
}
