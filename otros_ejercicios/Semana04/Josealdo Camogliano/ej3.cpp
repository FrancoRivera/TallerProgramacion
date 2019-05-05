#include <iostream>
using namespace std;
float compraMenu(char menu, char adicional, int dia) {
	float economico = 12.5, ejecutivo = 15.8, especial = 18.9;
	int helado = 5, torta = 7, ambos = 10, nada = 0;

	float subtotal;
	if (menu == 'E' && adicional == 'N') subtotal = economico + nada;
	if (menu == 'E' && adicional == 'H') subtotal = economico + helado;
	if (menu == 'E' && adicional == 'T') subtotal = economico + torta;
	if (menu == 'E' && adicional == 'A') subtotal = economico + ambos;

	if (menu == 'J' && adicional == 'N') subtotal = ejecutivo + nada;
	if (menu == 'J' && adicional == 'H') subtotal = ejecutivo + helado;
	if (menu == 'J' && adicional == 'T') subtotal = ejecutivo + torta;
	if (menu == 'J' && adicional == 'A') subtotal = ejecutivo + ambos;

	if (menu == 'S' && adicional == 'N') subtotal = especial + nada;
	if (menu == 'S' && adicional == 'H') subtotal = especial + helado;
	if (menu == 'S' && adicional == 'T') subtotal = especial + torta;
	if (menu == 'S' && adicional == 'A') subtotal = especial + ambos;

	float total;
	if (dia != 1 && dia != 3) {
		total = subtotal;
	}
	else {
		total = subtotal - subtotal*0.11;
	}
	return total;
}
int main() {
	float total;
	int dia;
	char menu, adicional;
	cout << "Tipo de menu (E: economico, J: ejecutivo, S: especial): ";
	cin >> menu;
	if (menu != 'E' && menu != 'J' && menu != 'S') cout << "Error en el menu";
	else {
		cout << "Adicional (N: nada, H: helado, T: torta, A: ambos): ";
		cin >> adicional;
		if (adicional != 'N' && adicional != 'H' && adicional != 'T' && adicional != 'A') cout << "Error en el adicional";
		else {
			cout << "Dia de la semana (un valor entre 1 y 7): ";
			cin >> dia;
			if (dia < 0 && dia >7) cout << "Error en el día";
			else {
				total = compraMenu(menu, adicional, dia);
			}
		}
	}
	cout << endl;
	cout << "Monto a pagar: " << total << endl;
	cout << endl << endl;
	system("pause");
}