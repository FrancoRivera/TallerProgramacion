#include<iostream>

using namespace std;

int main() {
	char categoria, zona, tipo;
	float area, monto, precio;
	cout << "Ingresa la categoría (C: comercial; R: residencial): ";
	cin >> categoria;
	categoria = toupper(categoria);
	if (categoria != 'C' && categoria != 'R') {
		cout << "Categoria no valida!" << endl;
		system("pause");
		return 0;
	}
	cout << "Ingresa la zona (A, B o C): ";
	cin >> zona;
	zona = toupper(zona);
	if (zona != 'A' && zona != 'B' && zona != 'C') {
		cout << "Zona no valida!" << endl;
		system("pause");
		return 0;
	}
	cout << "Ingresa el tipo (T: terreno; C: casa; D: departamento): ";
	cin >> tipo;
	tipo = toupper(tipo);
	if (tipo != 'T' && tipo != 'C' && tipo != 'D') {
		cout << "Tipo no valido!" << endl;
		system("pause");
		return 0;
	}
	cout << "Ingrese el area: ";
	cin >> area;
	if (area < 0) {
		cout << "Area no valida!" << endl;
		system("pause");
		return 0;
	}
	if (categoria == 'C') {
		switch (zona) {
		case 'A':
			switch (tipo) {
			case 'T':
				precio = 2200;
				break;
			case 'C':
				precio = 2500;
				break;
			case 'D':
				precio = 2100;
				break;
			}
			break;
		case 'B':
			switch (tipo) {
			case 'T':
				precio = 1300;
				break;
			case 'C':
				precio = 1500;
				break;
			case 'D':
				precio = 1200;
				break;
			}
			break;
		default:
			cout << "No existe la zona para esta categoria!" << endl;
			system("pause");
			return 0;
		}
	}
	else {
		switch (zona) {
		case 'A':
			switch (tipo) {
			case 'T':
				precio = 2100;
				break;
			case 'C':
				precio = 2500;
				break;
			case 'D':
				precio = 2100;
				break;
			}
			break;
		case 'B':
			switch (tipo) {
			case 'T':
				precio = 1500;
				break;
			case 'C':
				precio = 1600;
				break;
			case 'D':
				precio = 1300;
				break;
			}
			break;
		case 'C':
			switch (tipo) {
			case 'T':
				precio = 1100;
				break;
			case 'C':
				precio = 1300;
				break;
			case 'D':
				precio = 1000;
				break;
			}
			break;
		}
	}
	monto = precio*area;
	cout << "El monto a pagar es: " << monto << endl;

	system("pause");
	return 0;
}