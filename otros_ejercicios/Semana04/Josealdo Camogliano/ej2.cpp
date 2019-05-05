#include <iostream>
using namespace std;
int main() {
	float salario;
	int personas;
	cout << "Ingrese el salario mensual: ";
	cin >> salario;
	if (salario < 0) cout << "Eror en el salario";
	else {
		cout << "Ingrese numero de personas a cargo: ";
		cin >> personas;
		cout << endl;
		if (personas < 0) cout << "Error en el numero de personas";
		else {
			if (personas == 1 && salario < 500) cout << "Tipo de linea al que puede acceder: Pre Pago";
			if (personas == 1 && salario >= 500) cout << "Tipo de linea al que puede acceder: Post Pago";
			if (personas >= 2 && personas < 4 && salario < 750) cout << "Tipo de linea al que puede acceder: PrePago";
			if (personas >= 2 && personas < 4 && salario >= 750) cout << "Tipo de linea al que puede acceder: Post Pago";
			if (personas >= 4 && salario < 1000) cout << "Tipo de linea al que puede acceder: Pre Pago";
			if (personas >= 4 && salario >= 1000) cout << "Tipo de linea al que puede acceder: Post Pago";
		}
	}
	cout << endl << endl;
	system("pause");
}