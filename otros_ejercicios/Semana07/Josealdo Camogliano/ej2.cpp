#include <iostream>
using namespace std;
int main() {
	char transporte, ruta;
	int tiempo, momento;
	int contAuto = 0, contPrivado = 0, contPublico = 0;
	int cont7_9 = 0, cont12_14 = 0, cont17_19 = 0, cont_22 = 0;
	int sProArq = 0, sProBra = 0, sProPR = 0, sProRU = 0;
	int contArq = 0, contBra = 0, contPr = 0, contRU = 0;

	while (true) {
		do {
			cout << "Medio de transporte (A: Auto Propio, T: Privado(Taxi), P: Transporte Publico): ";
			cin >> transporte;
			transporte = toupper(transporte);
			if (transporte == 'A' || transporte == 'T' || transporte == 'P' || transporte == 'X') break;
		} while (transporte != 'A' || transporte != 'T' || transporte != 'P' || transporte != 'X');
		if (transporte == 'X') break;
		do {
			cout << "Tiempo de duracion del viaje (en min): ";
			cin >> tiempo;
			if (tiempo > 0) break;
		} while (tiempo <= 0);
		do {
			cout << "Momento del dia (1: 7:00-9:00, 2: 12:00-14:00, 3: 17:00-19:00, 4: 22:00 a mas): ";
			cin >> momento;
			if (momento >= 1 && momento <= 4) break;
		} while (momento < 1 || momento >4);
		do {
			cout << "Ruta elegida (A: Av. Arequipa, B: Av. Brasil, C: Paseo de la republica, O: otra ruta): ";
			cin >> ruta;
			ruta = toupper(ruta);
			if (ruta == 'A' || ruta == 'B' || ruta == 'C' || ruta == 'O') break;
		} while (ruta != 'A' || ruta != 'B' || ruta != 'C' || ruta != 'O');
		cout << endl;
		if (transporte == 'A') contAuto++;
		if (transporte == 'T') contPrivado++;
		if (transporte == 'P')contPublico++;

		if (momento == 1) cont7_9++;
		if (momento == 2) cont12_14++;
		if (momento == 3) cont17_19++;
		if (momento == 4) cont_22++;

		if (ruta == 'A') {
			sProArq += tiempo;
			contArq++;
		}
		if (ruta == 'B') {
			sProBra += tiempo;
			contBra++;
		}
		if (ruta == 'C') {
			sProPR += tiempo;
			contPr++;
		}
		if (ruta == 'O') {
			sProRU += tiempo;
			contRU++;
		}
	}
	cout << endl;
	cout << "Reporte: " << endl;
	cout << "======================================" << endl;
	cout << endl;
	cout << "Cantidad de usuarios por medio de transporte" << endl;
	cout << "Auto propio: " << contAuto << endl;
	cout << "Privado: " << contPrivado << endl;
	cout << "Publico: " << contPublico << endl;
	cout << endl;
	cout << "Momento con mayor cantidad de viajes son: " << endl;
	if (cont7_9 >= cont12_14 && cont7_9 >= cont17_19 && cont7_9 >= cont_22) cout << "1 " << endl;
	if (cont12_14 >= cont7_9 && cont12_14 >= cont17_19 && cont12_14 >= cont_22)cout << "2 " << endl;
	if (cont17_19 >= cont7_9 && cont17_19 >= cont12_14 && cont17_19 >= cont_22)cout << "3 " << endl;
	if (cont_22 >= cont7_9 && cont_22 >= cont12_14 && cont_22 >= cont17_19)cout << "4" << endl;
	cout << endl;
	cout << "Tiempo promedio de viaje por ruta son: " << endl;
	if(contArq != 0) cout << "Av. Arequipa: " << sProArq / contArq << endl;
	if (contBra != 0) cout << "Av. Brasil: " << sProBra / contBra << endl;
	if (contPr != 0) cout << "Paseo de la Republica: " << sProPR / contPr << endl;
	if (contRU != 0) cout << "Otra ruta: " << sProRU / contRU << endl;
	cout << endl;
	system("pause");
	return 0;
}