#include<iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "spanish");
	float salariomensual;
	int personasacargo;
	int tipolinea; //0= prepago, 1=postpago
	cout << "Ingrese el salario mensual: ";
	cin >> salariomensual;
	if (salariomensual > 0) {
		cout << "Ingrese el número de personas a cargo: ";
		cin >> personasacargo;
		if (personasacargo > 0) {
			if (personasacargo == 1) {
				if (salariomensual <= 500) {
					tipolinea = 0;
				}
				else {
					tipolinea = 1;
				}
			}
			if (personasacargo >=2 && personasacargo<=4) {
				if (salariomensual <= 750) {
					tipolinea = 0;
				}
				else {
					tipolinea = 1;
				}
			}
			if (personasacargo >4) {
				if (salariomensual <= 1000) {
					tipolinea = 0;
				}
				else {
					tipolinea = 1;
				}
			}
			if (tipolinea == 0) {
				cout << "Tipo de linea al que puede acceder: Pre Pago"<<endl;
			}
			else
			{
				cout << "Tipo de linea al que puede acceder: Post Pago" << endl;
			}
		}
		else
		{
			cout << "Error en el numero de personas";
		}
	}
	else
	{
		cout << "Error en el monto del salario mensual";
	}
	cin.get();
	cin.get();
}