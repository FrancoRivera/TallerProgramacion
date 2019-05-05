#include<iostream>
using namespace std;
int main() {
	int numerador, denominador;
	int cociente = 0,resto;
	do {
		cout << "Ingrese el numerador: ";
		cin >> numerador;
	} while (numerador < 0);
	do {
		cout << "Ingrese el denominador: ";
		cin >> denominador;
	} while (denominador <= 0);
	resto = numerador;
	while (resto>=denominador) {
		resto = resto - denominador;
		cociente++;
	}
	cout << "Cociente: " << cociente<<endl;
	cout << "Resto: " << resto << endl;
	system("pause");
	return 0;
}