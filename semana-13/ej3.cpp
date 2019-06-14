// ej3.cpp : main project file.

#include <iostream>
#include <conio.h>

#define MAX 1000

using namespace std;
using namespace System;

void imprimirArreglo(int *arr, int contador) {
	cout << "[";
	for (int i = 0; i < contador-1; i++)
	{
		cout << arr[i] << ", ";
	}
	cout << arr[contador-1] << "]" << endl;
}
void multiplicarArreglo(int *arr, int contador) {
	int *otro_arr = new int[MAX+1];
	for (int i = 0; i < MAX+1; i++)
	{
		otro_arr[i] = 0;
	}

	for (int i = contador-1; i >= 0; i--)
	{
		
		int multiplicacion = arr[i] * 5;
		//9 * 5 = 45;
		//	45 / 10 = 4.5	enrealidadme da 4 porque son int ambos	
		int llevando = multiplicacion / 10;
		otro_arr[i+1] += multiplicacion % 10;
		otro_arr[i] = llevando;
		
		// [3, 5, 6]  og arreglo
		// [1, 7, 8, 0] otro arreglo
	//  1, [7, 8, 0] no sirve arreglo
	}
	imprimirArreglo(otro_arr, contador+1);
}



int main()
{
	int n = 0;
	// arreglo de int dinamico
	int contador = 0;
	int *arr = new int[MAX];

	while (n >= 0) {
		cin >> n;
		// si es mayor a 9 seguir pidiendo numeros
		if (n > 9) continue;
		//ssi esmenor a 0 salir
		if (n < 0) break;
		arr[contador] = n;
		contador++;
   }
	imprimirArreglo(arr, contador);
	multiplicarArreglo(arr, contador);

	_getch();
	
    return 0;
}
