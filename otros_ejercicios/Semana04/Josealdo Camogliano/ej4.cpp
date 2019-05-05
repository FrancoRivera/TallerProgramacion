#include <iostream>
using namespace std;
int main() {
	int escala, horas;
	int sueldo;
	cout << "Ingrese la escala: ";
	cin >> escala;
	if (escala < 1 || escala > 8) cout << "Error en la escala";
	else {
		cout << "Ingrese la cantidad de horas trabajadas en la semana: ";
		cin >> horas;
		if (horas != 24 && horas != 30 && horas != 40) cout << "Error en las horas";
		else {
			if (escala == 1) {
				if (horas == 24) sueldo = 1243;
				if (horas == 30) sueldo = 1554;
				if (horas == 40) sueldo = 2073;
			}
			if (escala == 2) {
				if (horas == 24) sueldo = 1430;
				if (horas == 30) sueldo = 1788;
				if (horas == 40) sueldo = 2384;
			}
			if (escala == 3) {
				if (horas == 24) sueldo = 1617;
				if (horas == 30) sueldo = 2021;
				if (horas == 40) sueldo = 2695;
			}
			if (escala == 4) {
				if (horas == 24) sueldo = 1865;
				if (horas == 30) sueldo = 2332;
				if (horas == 40) sueldo = 3109;
			}
			if (escala == 5) {
				if (horas == 24) sueldo = 2239;
				if (horas == 30) sueldo = 2798;
				if (horas == 40) sueldo = 3731;
			}
			if (escala == 6) {
				if (horas == 24) sueldo = 2612;
				if (horas == 30) sueldo = 3265;
				if (horas == 40) sueldo = 4353;
			}
			if (escala == 7) {
				if (horas == 24) sueldo = 2861;
				if (horas == 30) sueldo = 3576;
				if (horas == 40) sueldo = 4768;
			}
			if (escala == 8) {
				if (horas == 24) sueldo = 3109;
				if (horas == 30) sueldo = 3887;
				if (horas == 40) sueldo = 5183;
			}
			cout << endl;
			cout << "Su remuneracion mensual es " << sueldo << endl;
		}
	}	
	cout << endl;
	system("pause");
	return 0;
}