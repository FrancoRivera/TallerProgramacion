#include<iostream>
using namespace std;
int main() {
	char tipomenu, adicional;
	int diasemana;
	float montoapagar;
	cout << "Tipo de menú (E: económico; J: ejecutivo; S: especial): ";
	cin >> tipomenu;
	tipomenu = toupper(tipomenu); // convierte la letra a mayuscula
	if (tipomenu == 'E' || tipomenu == 'J' || tipomenu == 'S') {
		cout << "Adicional (N: nada; H: helado; T: torta; A: ambos): ";
		cin >> adicional;
		adicional = toupper(adicional);
		if (adicional =='N'|| adicional == 'H' || adicional == 'T' || adicional == 'A' )
		{
			cout << "Día de la semana (un valor entre 1 y 7): ";
			cin >> diasemana;
			if (diasemana == 1 || diasemana == 2 || diasemana == 3 || diasemana == 4 || diasemana == 5 || diasemana == 6 || diasemana == 7) {
				//aqui tenemos todas las variables validadas
				//monto a base del tipo de menu
				if (tipomenu == 'E') {
					montoapagar = 12.5;
				}
				else if (tipomenu == 'J')
				{
					montoapagar = 15.8;
				}
				else if (tipomenu == 'S')
				{
					montoapagar = 18.9;
				}
				//monto a base del adicional
				if (tipomenu == 'H') {
					montoapagar = montoapagar + 5;
				}
				else if (tipomenu == 'T')
				{
					montoapagar = montoapagar + 7;
				}
				else if (tipomenu == 'A')
				{
					montoapagar = montoapagar + 10;
				}
				//descuento a base del dia:
				if (diasemana == 1 || diasemana == 3) {
					montoapagar = montoapagar * (1 - 0.11);
				}
				cout << "El monto a pagar es: " << montoapagar << endl;
			}
			else
			{
				cout << "Error en el dia de la semana";
			}
		}
		else
		{
			cout << "Error en el adicional";
		}
	}
	else
	{
		cout << "Error en el tipo de menu";
	}

	cin.get();
	cin.get();
}