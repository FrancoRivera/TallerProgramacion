// Semana 15

// ej1.cpp

#include <iostream>
#include <conio.h>

using namespace std;

// inicializa matriz de muestra
//
// parametros:
// matriz 20x20
void genera_muestra_matriz(int matriz[20][20]) {

	int mapa[20][20] = {
		// 0  1  2  3  4  5  6  7  8  9  0  1  2  3  4  5  6  7  8  9
		{ 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 }, // 0
		{ 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1 }, // 1
		{ 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1 }, // 2
		{ 1, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1 }, // 3
		{ 1, 0, 0, 0, 1, 0, 0, 0, 0, 1, 1, 0, 0, 0, 1, 1, 0, 0, 0, 1 }, // 4
		{ 1, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1 }, // 5
		{ 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1 }, // 6
		{ 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1 }, // 7
		{ 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1 }, // 8
		{ 1, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1 }, // 9
		{ 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1 }, // 0
		{ 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1 }, // 1
		{ 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1 }, // 2
		{ 1, 0, 0, 0, 0, 0, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1 }, // 3
		{ 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1 }, // 4
		{ 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1 }, // 5
		{ 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1 }, // 6
		{ 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1 }, // 7
		{ 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1 }, // 8
		{ 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 }  // 9
	};

	for (int i = 0; i < 20; i++) {
		for (int j = 0; j < 20; j++) {
			matriz[i][j] = mapa[i][j];
		}
	}

}

void imprimir_matriz(int matriz[20][20]) {
	for (int i = 0; i < 20; i++) {
		for (int j = 0; j < 20; j++) {
			if (matriz[i][j] == 0) cout << " ";// imprime un espacio
			else {
				if (matriz[i][j] == 1) cout << char(219);// imprime un bloque
				else {
					if (matriz[i][j] == 2) cout << "x";
					else cout << matriz[i][j];
				}
			}
		}
		cout << endl;
	}
}

void imprimirFicha(int ficha[5][2], int pos_x, int pos_y) {
	for (int i = 0; i < 5; i++)
	{
		System::Console::SetCursorPosition(pos_x + ficha[i][0], pos_y + ficha[i][1]);
		cout << "5";
	}
}
bool  verificar_colision(int matriz[20][20], int ficha[5][2], int pos_x, int pos_y) {
	for (int i = 0; i < 5; i++)
	{
		if (matriz[pos_y + ficha[i][1]][pos_x + ficha[i][0]] == 1) return false;
	}
	return true;
};

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
void desplazar_ficha(int matriz[20][20], int ficha[5][2], int &pos_x, int &pos_y, int d_x, int d_y) {
	
	for (int i = 0; i < 5; i++)
	{
		System::Console::SetCursorPosition(pos_x + ficha[i][0], pos_y + ficha[i][1]);
		cout << " ";
	}


	if (verificar_colision(matriz, ficha, pos_x + d_x, pos_y + d_y)) {
		pos_x += d_x;
		pos_y += d_y;
	}
	imprimirFicha(ficha, pos_x, pos_y);
	System::Console::SetCursorPosition(25, 25);
		
}




int main() {

	// declaración
	int pos_x = 5;
	int pos_y = 5;

	int matriz[20][20];
	// inicialización
	//
	genera_muestra_matriz(matriz);

	int ficha[5][2] = {
		{ 0, 1 },
		{ 0, 2 },
		{ 1, 0 },
		{ 1, 1 },
		{ 1, 2 }
	};
	//solicitar direccion de la ficha (horiziontal o vertical)

	//ejecución infinita
	//
	//
	System::Console::Clear();
	imprimir_matriz(matriz);
	
	// direccion actual derecha o abajo
	int dir = 1;
	
	int dir_x;
	int dir_y;

	while (true) {
		// limpiamos la pantalla;
		//
		dir_x = 0;
		dir_y = 0;
		if (kbhit()) {
			switch (_getch()) {
			
			case 72: // arriba
				dir_y = -1;
				break;
			case 80: // abajo
				dir_y = 1;
				break;
			case 75: // izquierda
				dir_x = -1;
				break;
			case 77: // derecha
				dir_x = 1;
				break;
			}
			desplazar_ficha(matriz, ficha, pos_x, pos_y, dir_x, dir_y);
		};
		//movemos la ficha
		

		// imprimimos el tablero
		

		_sleep(18);
	}


	return 0;
}
