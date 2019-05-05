#include <iostream>
#include <conio.h>
using namespace std;
using namespace System;

void mensaje(char apellido, int edad, float peso) {

	/*APELLIDO*/
	int a1 = int(apellido >= 'A' && apellido <= 'Z')*(apellido / 3);
	int mA1 = apellido % 3;
	int a2 = a1 / 3;
	int mA2 = a1 % 3;
	int a3 = a2 / 3;
	int mA3 = a2 % 3;
	int a4 = a3 / 3;
	int mA4 = a3 % 3;
	cout << "Apellido: " << mA4 << mA3 << mA2 << mA1 << endl;
	/*EDAD*/
	int e1 = (edad >= 16 && edad <= 19)*(edad / 3);
	int mE1 = edad % 3;
	int e2 = e1 / 3;
	int mE2 = e1 % 3;
	cout << "Edad: " << e2 << mE2 << mE1 << endl;
	/*PESO*/
	int p1 = (peso >= 50 && peso <= 60)*(peso / 3);
	int mP1 = (int)peso % 3;
	int p2 = p1 / 3;
	int mP2 = p1 % 3;
	int p3 = p2 / 3;
	int mP3 = p2 % 3;
	cout << "Peso: " << p3 << mP3 << mP2 << mP1 << endl;

	cout << "Mensaje Ovni: " << mA4 << mA3 << mA2 << mA1 << " " << e2 << mE2 << mE1 << " " << p3 << mP3 << mP2 << mP1;
}
int main() {
	char apellido;
	int edad;
	float peso;

	cout << "Ingrese la letra del apellido: ";
	cin >> apellido;
	cout << "Ingrese la edad: ";
	cin >> edad;
	cout << "Ingrese el peso: ";
	cin >> peso;
	cout << endl << endl;
	cout << "Datos para cominicarse: " << endl;
	mensaje(apellido, edad, peso);

	_getch();
	return 0;
}