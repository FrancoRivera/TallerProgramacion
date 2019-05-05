#include<iostream>
using namespace std;
int main() {
	int escala, numerohoras;
	float remuneracion;
	cout << "Ingrese la escala: ";
	cin >> escala;
	if (escala > 0 && escala < 9) {
		cout << "Ingrese cantidad de horas trabajadas en la semana: ";
		cin >> numerohoras;
		if (numerohoras == 24 || numerohoras == 30 || numerohoras == 40) {
			if (escala == 1) {
				if (numerohoras == 24) {
					remuneracion = 1243;
				}
				else if (numerohoras == 30) {
					remuneracion = 1554;
				}
				else if(numerohoras == 40)	{
					remuneracion = 2073;
				}
			}
			if (escala == 2) {
				if (numerohoras == 24) {
					remuneracion = 1430;
				}
				else if (numerohoras == 30) {
					remuneracion = 1788;
				}
				else if (numerohoras == 40) {
					remuneracion = 2384;
				}
			}
			if (escala == 3) {
				if (numerohoras == 24) {
					remuneracion = 1617;
				}
				else if (numerohoras == 30) {
					remuneracion = 2021;
				}
				else if (numerohoras == 40) {
					remuneracion = 2695;
				}
			}
			if (escala == 4) {
				if (numerohoras == 24) {
					remuneracion = 1865;
				}
				else if (numerohoras == 30) {
					remuneracion = 2332;
				}
				else if (numerohoras == 40) {
					remuneracion = 3109;
				}
			}
			if (escala == 5) {
				if (numerohoras == 24) {
					remuneracion = 2239;
				}
				else if (numerohoras == 30) {
					remuneracion = 2798;
				}
				else if (numerohoras == 40) {
					remuneracion = 3731;
				}
			}
			if (escala == 6) {
				if (numerohoras == 24) {
					remuneracion = 2612;
				}
				else if (numerohoras == 30) {
					remuneracion = 3265;
				}
				else if (numerohoras == 40) {
					remuneracion = 4353;
				}
			}
			if (escala == 7) {
				if (numerohoras == 24) {
					remuneracion = 2861;
				}
				else if (numerohoras == 30) {
					remuneracion = 3576;
				}
				else if (numerohoras == 40) {
					remuneracion = 4768;
				}
			}
			if (escala == 8) {
				if (numerohoras == 24) {
					remuneracion = 3109;
				}
				else if (numerohoras == 30) {
					remuneracion = 3887;
				}
				else if (numerohoras == 40) {
					remuneracion = 5183;
				}
			}
			cout << "Su remuneración mensual es: " << remuneracion << endl;
		}
		else
		{
			cout << "Error en la cantidad de horas" << endl;
		}
	}
	else
	{
		cout << "Error en la escala" << endl;
	}
	cin.get();
	cin.get();
}