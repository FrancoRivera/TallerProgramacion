#include <iostream>
#include <conio.h>
using namespace std;
using namespace System;
char hallarLinea(int salario, int personas) {
	return (personas == 1 && salario <= 500)*'P' + (personas == 1 && salario > 500)*'O' +
		((personas >= 2 && personas <= 4) && salario <= 750)*'P' + ((personas >= 2 && personas <= 4) && salario > 750)*'O' +
		(personas > 4 && salario <= 1000)*'P' + (personas > 4 && salario > 1000)*'O';
}
int main() {
	float salario;
	int personas;
	char linea;
	cout << "ingrese salario: ";
	cin >> salario;
	cout << "Ingrese el numero de personas a cargo: ";
	cin >> personas;

	linea = hallarLinea(salario, personas);
	cout << "Linea a la que se puede acceder: " << linea << endl;
	_getch();
	return 0;
}