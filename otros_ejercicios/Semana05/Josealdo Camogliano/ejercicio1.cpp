#include <iostream>
using namespace std;
void calcularPrecio(char *marca, char *sEnfriamiento) {
	if (*marca == 'M') {
		if (*sEnfriamiento == 'F') cout << "Monto a pagar: 895.9";
		if (*sEnfriamiento == 'N') cout << "Monto a pagar: 1250";
	}
	if (*marca == 'L') {
		if (*sEnfriamiento == 'F') cout << "Monto a pagar: 975";
		if (*sEnfriamiento == 'N') cout << "Monto a pagar: 1650";
	}
	if (*marca == 'C') {
		if (*sEnfriamiento == 'F') cout << "Monto a pagar: 937.7";
		if (*sEnfriamiento == 'N') cout << "Monto a pagar: 1379";
	}
}

int main() {
	char *marca, *sEnfriamiento;
	marca = new char;
	sEnfriamiento = new char;

	cout << "Marca (M: Mabe, L: LG, C: Coldex): ";
	cin >> marca;
	*marca = toupper(*marca);
	if (*marca != 'M' && *marca != 'L' && *marca != 'C') cout << "Error";
	else {
		cout << "Sistema de Enfriamiento (F: Auto Frost, N: No Frost): ";
		cin >> sEnfriamiento;
		*sEnfriamiento = toupper(*sEnfriamiento);
		if (*sEnfriamiento != 'N' && *sEnfriamiento != 'F') cout << "Error";
		else {
			cout << endl;
			calcularPrecio(marca, sEnfriamiento);
		}
	}
	cout << endl;
	system("pause");
	return 0;
}