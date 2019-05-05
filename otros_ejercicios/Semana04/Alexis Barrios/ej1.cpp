#include<iostream>
using namespace std;
int main() {
	int horaemergencia, nivelemergencia, ubicacion;

	//Primero, pedimos datos:
	cout << "Ingrese la ubicación: ";
	cin >> ubicacion; //0 zona terrestre, 1 zona maritima
	if (ubicacion == 1 || ubicacion == 0) { // validamos la ubacion
		cout << "Ingrese la hora de la llamada: ";
		cin >> horaemergencia;
		if (horaemergencia>0 && ((horaemergencia %100) <=60)) { //validamos la hora

			if (ubicacion == 1) {
				nivelemergencia = 2000;
			}
			else
			{
				nivelemergencia = 1000;
			}

			if (horaemergencia <= 600) { //madrugada
				nivelemergencia = nivelemergencia + 500;
			}
			else if (horaemergencia <= 1200 && horaemergencia > 600) { // mañana
				nivelemergencia = nivelemergencia + 200;
			}
			else if (horaemergencia <= 1800 && horaemergencia > 1200) {//tarde
				nivelemergencia = nivelemergencia + 300;
			}
			else if (horaemergencia <= 2359 && horaemergencia > 1800) {//noche
				nivelemergencia = nivelemergencia + 400;
			}

			if (nivelemergencia >= 1000 && nivelemergencia < 1500) {
				cout << "POSIBLE RESCATE" << endl;
			}
			else if (nivelemergencia >= 1500 && nivelemergencia < 1800) {
				cout << "RESCATE EN ALERTA AMARILLA" << endl;
			}
			else if (nivelemergencia >= 1800 && nivelemergencia < 2200) {
				cout << "RESCATE EN ALERTA ROJA" << endl;
			}
			else
			{
				cout << "RESCATE INMINENTE" << endl;
			}
		}
		else
		{
			cout << "Error en la hora de la llamada";
		}
		
	}
	else
	{
		cout << "Error en el tipo de ubicacion";
	}
	cin.get();
	cin.get();
	return 0;
}