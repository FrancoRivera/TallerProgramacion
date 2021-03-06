
#include<iostream>


using namespace std;

//fibonacci en la posicion N
int fib_recursivo(int n){
  if (n == 0) return 0;
  if (n == 1) return 1;
  if (n == 2) return 1;
  return fib_recursivo(n-1) + fib_recursivo(n-2);
}

int fib_for(int n){
  // termino anterior
  int f_ant = 1;
  // termino anterior al anterior
  int f_ant_ant = 1;
  for (int i = 1; i < n; i++){
    int aux = 0;
    // fibonacci no es mas que la suma de sus terminos pasados
    aux = f_ant + f_ant_ant;
    // en la siguiente iteración el anterior sera el anterior al anterior
    f_ant_ant = f_ant;
    //en la siguiente iteracion el anterior será el actual
    f_ant = aux;
  }
  return f_ant_ant;
}

int main(){

  int n = 7;

  cout << fib_for(n);
  return 0;
}

// la otra forma

#include "stdafx.h";
#include <conio.h>
#include <iostream>

using namespace std;

int fibonacci(int n) {
	int n_anterior_anterior = 1;
	int n_anterior = 1;
	int fibonacci = 0;
		for (int i = 0; i < n; i++) {
			fibonacci = n_anterior_anterior + n_anterior;
			n_anterior_anterior = n_anterior;
			n_anterior = fibonacci;
		}

	return n_anterior_anterior;
}

int main() {
	int numero = 7;
	
	for (int fila = 1; fila <= numero; fila++)
	{
		for (int columna = 0; columna < numero - fila ; columna++)
		{
			cout << "\t";
		}
		for (int columna = 0; columna < fila; columna++)
		{
			cout << fibonacci(numero-fila) << "\t";
		}
		cout << endl;
	}


	_getch();
	return 0;
}
