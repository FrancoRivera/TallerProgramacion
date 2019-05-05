#include <iostream>
using namespace std;
int main() {
	int n, cont = 0;
	char sexo, eCivil;
	int edad;
	int cont1 = 0, cont2 = 0;
	int contHombres = 0, contMujeres = 0;
	float pHombres;
	float pMujeres;
	cout << "Ingrese n: ";
	cin >> n;
	
	if (n <= 100) {
		while (cont < n) {
			do {
				cout << "Sexo de la persona (M: masculino, F: femenino): ";
				cin >> sexo;
				sexo = toupper(sexo);
				if (sexo == 'F' || sexo == 'M') break;
			} while (sexo != 'F' || sexo != 'M');
			do {
				cout << "Edad: ";
				cin >> edad;
				if (edad > 14) break;
			} while (edad < 14);
			do {
				cout << "Estado civil (a: Soltero, b: Casado, c: Viudo, d: Divorciado ): ";
				cin >> eCivil;
				eCivil = toupper(eCivil);
				if (sexo == 'a' || sexo == 'b' || sexo == 'c' || sexo == 'd') break;
			} while (sexo != 'a' || sexo != 'b' || sexo != 'c' || sexo != 'd');

			if (sexo == 'm' && (edad >= 16 && edad <= 21)) cont1++;
			if (sexo == 'h' && edad >= 35 && (eCivil == 'a'|| eCivil == 'd')) cont2++;
			if (sexo == 'f')contMujeres++;
			if (sexo == 'm')contHombres++;

			cont++;
		}
	}
	else {
		cout << "error";
	}
	pHombres = contHombres / n * 100;
	pMujeres = contMujeres / n * 100;

	cout << "Numero de mujeres casadas entre 16 y 21: " << cont1 << endl;
	cout << "Porcentaje de hombres: " << pHombres;
	cout << "Porcentaje de mujeres: " << pMujeres;
	cout << "Numero de hombres mayores a 35 solteros o divorciados: " << cont2 << endl;
	cout << endl;
	system("pause");
	return 0;
}