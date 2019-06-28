
// Semana 15

// ej1.cpp

#include <iostream>

using namespace std;


#include <stdlib.h>

// For chrono
#include <chrono>
#include <thread>

// inicializa matriz de muestra
//
// parametros:
// matriz 20x20
void genera_muestra_matriz(int matriz[20][20]){

  int mapa [20][20] = {
  // 0  1  2  3  4  5  6  7  8  9  0  1  2  3  4  5  6  7  8  9
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1}, // 0
    {1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1}, // 1
    {1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1}, // 2
    {1, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1}, // 3
    {1, 0, 0, 0, 1, 0, 0, 0, 0, 1, 1, 0, 0, 0, 1, 1, 0, 0, 0, 1}, // 4
    {1, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1}, // 5
    {1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1}, // 6
    {1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1}, // 7
    {1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1}, // 8
    {1, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1}, // 9
    {1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1}, // 0
    {1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1}, // 1
    {1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1}, // 2
    {1, 0, 0, 0, 0, 0, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1}, // 3
    {1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1}, // 4
    {1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1}, // 5
    {1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1}, // 6
    {1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1}, // 7
    {1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1}, // 8
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1}  // 9
  };

  for (int i = 0; i < 20; i++) {
    for (int j = 0; j < 20; j++) {
      matriz[i][j] = mapa[i][j];
    }
  }

}

void imprimir_matriz(int matriz[20][20]){
  for (int i = 0; i < 20; i++) {
    for (int j = 0; j < 20; j++) {
      if (matriz[i][j] == 0) cout << " ";// imprime un espacio
      else{
	if (matriz[i][j] == 1) cout << "-";// imprime un bloque
	else{
	  cout << matriz[i][j];
	}
      }
    }
    cout << endl;
  }
}

// desplaza un objeto en una matriz
// horizontalmente  (izq derecha)
// y verticalmente (arriba abajo
// si la ficha choca un borde o un obstaculo
// cambia la dirección
//
// parametros:
// matriz = matriz 20x20
// mov = Desplazamiento de la ficha. (0 = horizontal, 1 = vertical)" << endl;
// pos_x = posicion inicial coordenada x
// pos_y = posicion inicial coordenada y
// dir = direccion actual (1 o -1)
void desplazar_ficha(int matriz[20][20], int mov, int &pos_x, int &pos_y, int &dir){

  // reseteamos el valor de la matriz
  matriz[pos_x][pos_y] = 0;

  if (mov == 0){
    pos_x += dir;
    if (pos_x+dir > 20 || pos_x + dir < 0 || (pos_x + dir) == 1) dir *= -1;
  }
  if (mov == 1){
    pos_y += dir;
    if (pos_y+dir > 20 || pos_y + dir < 0 || (pos_y + dir) == 1) dir *= -1;
  }

  matriz[pos_x][pos_y] = 2;
}

int main(){

  // declaración
  int pos_x, pos_y, mov;

  int matriz[20][20];
  // inicialización
  //
  genera_muestra_matriz(matriz);

  //solicitar posicion inicial (x, y)
  cout << "Posicion inicial de la ficha" << endl;
  cout << "X:";
  cin >> pos_x;
  cout << "Y:";
  cin >> pos_y;


  //solicitar direccion de la ficha (horiziontal o vertical)

  cout << "Desplazamiento de la ficha. (0 = horizontal, 1 = vertical)" << endl;
  cin >> mov;

  //ejecución infinita
  //
  //

  // direccion actual derecha o abajo
  int dir = 1;

  while (true){
    // limpiamos la pantalla;
    system("clear");

    //movemos la ficha
    desplazar_ficha(matriz, mov, pos_x, pos_y, dir);

    // imprimimos el tablero
    imprimir_matriz(matriz);

    // espera 18 ms
    this_thread::sleep_for(chrono::milliseconds(18));
  }


  return 0;
}
