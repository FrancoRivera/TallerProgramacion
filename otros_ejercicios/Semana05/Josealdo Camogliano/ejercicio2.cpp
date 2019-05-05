#include <iostream>
using namespace std;
void calcularMonto(char *categoria, char *zona, char* tipo, int *metros) {
	int m;
	if (*categoria == 'C') {
		if (*zona == 'A') {
			if (*tipo == 'T') m = 2200;
			if (*tipo == 'C') m = 2500;
			if (*tipo == 'D') m = 2100;
		}
		if (*zona == 'B') {
			if (*tipo == 'T') m = 1300;
			if (*tipo == 'C') m = 1500;
			if (*tipo == 'D') m = 1200;
		}
	}
	else {
		if (*zona == 'A') {
			if (*tipo == 'T') m = 2100;
			if (*tipo == 'C') m = 2500;
			if (*tipo == 'D') m = 2100;
		}
		if (*zona == 'B') {
			if (*tipo == 'T') m = 1500;
			if (*tipo == 'C') m = 1600;
			if (*tipo == 'D') m = 1300;
		}
		if (*zona == 'C') {
			if (*tipo == 'T') m = 1100;
			if (*tipo == 'C') m = 1300;
			if (*tipo == 'D') m = 1000;
		}
	}
	cout << "El monto a cancelar es de $" << m*(*metros);
}
int main() {
	char *categoria, *zona, *tipo;
	int *metros;
	categoria = new char;
	zona = new char;
	tipo = new char;
	metros = new int;

	cout << "Ingrese la categoria (C: comercial, R: residencial): ";
	cin >> categoria;
	*categoria = toupper(*categoria);
	if (*categoria != 'C' && *categoria != 'R')cout << "Error";

	else {
		cout << "Ingrese la zona (A, B o C): ";
		cin >> zona;
		*zona = toupper(*zona);
		if (*categoria == 'C' && *zona == 'C') cout << "No existe la zona C";
		else {
			if (*zona != 'A' && *zona != 'B' && *zona != 'C') cout << "Error";
			else {
				cout << "Ingrese el tipo (T: Terreno, C: Casa, D: Departamento): ";
				cin >> tipo;
				*tipo = toupper(*tipo);
				if (*tipo != 'T' && *tipo != 'C' && *tipo != 'D') cout << "Error";
				else {
					cout << "Ingrese el area : ";
					cin >> *metros;
					if (*metros <= 0) cout << "Error";
					else {
						cout << endl;
						calcularMonto(categoria, zona, tipo, metros);
					}
				}
			}
		}

	}
	cout << endl;
	system("pause");
	return 0;
}