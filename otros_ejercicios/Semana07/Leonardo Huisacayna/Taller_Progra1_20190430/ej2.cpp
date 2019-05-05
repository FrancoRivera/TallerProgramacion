#include <iostream>

using namespace std;

int main() {
	//Datos de entrada
	char medioTransporte,rutaElegida;
	int duracionViaje,momentoDia;

	//Contadores
	int contA = 0, contT = 0, contP = 0;
	int contM1 = 0, contM2 = 0, contM3 = 0, contM4 = 0;
	int contRA = 0, contRB = 0, contRC = 0, contRO = 0;
	
	//Sumas
	int sumaA = 0, sumaB = 0, sumaC = 0, sumaO = 0;

	//Mayor
	int mayor = 0;

	//Promedios
	float promA, promB, promC, promO;

	do {
		do {
			std::cout << "Medio de Transporte (A: Auto propio; T: Privado (Taxi); P: Transporte público): ";
			cin >> medioTransporte;
			medioTransporte = toupper(medioTransporte);
		} while (medioTransporte!='A'&&medioTransporte!='T'&&medioTransporte!='P'&&medioTransporte!='X');
		
		if (medioTransporte!='X') {
			do {
				cout << "Duracion de viaje: ";
				cin >> duracionViaje;
			} while (duracionViaje<=0);
			do {
				cout << "Momento del día en que realiza el viaje (1: Entre 7:00 y 9:00; 2: Entre 12:00 y 14:00;3: Entre 17 : 00 y 19 : 00; 4: A partir de las 22 : 00)";
				cin >> momentoDia;
			} while (momentoDia < 1 || momentoDia>4);
			do {
				cout << "Ruta elegida (A: Av. Arequipa; B: Av. Brasil; C: Paseo de la República; O: Otra ruta)";
				cin >> rutaElegida;
				rutaElegida = toupper(rutaElegida);
			} while (rutaElegida != 'A' && rutaElegida != 'B' && rutaElegida != 'C' && rutaElegida != 'O');

			switch (medioTransporte)
			{
			case 'A':
				contA++;
				break;
			case 'T':
				contT++;
				break;
			case 'P':
				contP++;
				break;
			}

			switch (momentoDia)
			{
			case 1:
				contM1++;
				if (contM1>=mayor) {
					mayor = contM1;
				}
				break;
			case 2:
				contM2++;
				if (contM2 >= mayor) {
					mayor = contM2;
				}
				break;
			case 3:
				contM3++;
				if (contM3 >= mayor) {
					mayor = contM3;
				}
				break;
			case 4:
				contM4++;
				if (contM4 >= mayor) {
					mayor = contM4;
				}
				break;
			}

			switch (rutaElegida)
			{
			case 'A':
				sumaA += duracionViaje;
				contRA++;
				break;
			case 'B':
				sumaB += duracionViaje;
				contRB++;
				break;
			case 'C':
				sumaC += duracionViaje;
				contRC++;
				break;
			case 'O':
				sumaO += duracionViaje;
				contRO++;
				break;
			}
		}
		cout << endl;
	} while (medioTransporte!='X');

	cout << "Cantidad de usuarios por medio de transporte: " << endl;
	cout << "Auto propio: " << contA << endl;
	cout << "Privado: " << contT << endl;
	cout << "Transporte publico: " << contP << endl;

	cout << "Momentos con mayor cantidad de viajes: ";
	if (mayor==contM1) {
		cout << "1";
	}
	if (mayor == contM2) {
		if (mayor == contM1) {
			cout << ", ";
		}
		cout << "2";
	}
	if (mayor == contM3) {
		if (mayor == contM1 || mayor == contM2) {
			cout << ", ";
		}
		cout << "3";
	}
	if (mayor == contM4) {
		if (mayor == contM1 || mayor == contM2 || mayor == contM3) {
			cout << ", ";
		}
		cout << "4";
	}
	cout << endl;
	promA = contRA == 0 ? 0.0 : (float)sumaA / (float)contRA;
	promB = contRB == 0 ? 0.0 : (float)sumaB / (float)contRB;
	promC = contRC == 0 ? 0.0 : (float)sumaC / (float)contRC;
	promO = contRO == 0 ? 0.0 : (float)sumaO / (float)contRO;

	cout << "Tiempo promedio de viaje por ruta son: " << endl;
	cout << "Av. Arequipa: " << promA << endl;
	cout << "Av. Brasil: " << promB << endl;
	cout << "Paseo de la Republica: " << promC << endl;
	cout << "Otra Ruta: " << promO << endl;

	system("pause");
	return 0;
}