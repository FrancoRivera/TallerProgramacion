#include <iostream>
using namespace std;
int main() {
	int zona, hora;
	int accion;
	cout << "Ingrese la ubicacion: ";
	cin >> zona;
	if (zona != 0 && zona != 1) cout << "Error en el tipo de ubicacion";
	else {
		cout << "Ingrese la hora de la emergencia: ";
		cin >> hora;
		if (hora < 0 && hora > 2400) cout << "Error en la hora de llamada";
		else {
			if (zona == 1) {
				if (hora >= 0 && hora <= 600) accion = 2500;
				if (hora > 600 && hora <= 1200) accion = 2200;
				if (hora > 1200 && hora <= 1800) accion = 2300;
				if (hora > 1801 && hora <= 2359) accion = 2400;
			}
			else {
				if (hora >= 0 && hora <= 600) accion = 1500;
				if (hora > 600 && hora <= 1200) accion = 1200;
				if (hora > 1200 && hora <= 1800) accion = 1300;
				if (hora > 1801 && hora <= 2359) accion = 1400;
			}
		}
	}	
	if (accion >= 1000 && accion < 1500) cout << "POSIBLE RESCATE";
	if (accion >= 1500 && accion < 1800) cout << "RESCATE EN ALERTA AMARILLA";
	if (accion >= 1800 && accion < 2200) cout << "RESCATE EN ALERTA ROJA";
	if (accion >= 2200 ) cout << "RESCATE INMINENTE"; 
	cout << endl << endl;
	system("pause");
	return 0;
}