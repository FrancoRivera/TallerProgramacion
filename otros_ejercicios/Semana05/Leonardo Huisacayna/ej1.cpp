#include<iostream>

using namespace std;

int main() {
	char marca, enfriamiento;
	float precio;
	cout << "Marca (M: Mabe; L: LG; C: Coldex): ";
	cin >> marca;
	marca = toupper(marca);
	if (marca!='M'&&marca!='L'&&marca!='C') {
		cout << "La marca ingresada no es valida!"<<endl;
		system("pause");
		return 0;
	}
	cout << "Sistema de enfriamiento (F: Auto Frost; N: No Frost): ";
	cin >> enfriamiento;
	enfriamiento = toupper(enfriamiento);
	if (enfriamiento!='F'&&enfriamiento!='N') {
		cout << "El sistema de enfriamiento ingresado no es valido!"<<endl;
		system("pause");
		return 0;
	}
	
	
	switch (marca) {
	case 'M':
		if (enfriamiento=='F') {
			precio = 895.9;
		}
		else {
			precio = 1250;
		}
		break;
	case 'L':
		if (enfriamiento == 'F') {
			precio = 975;
		}
		else {
			precio = 1650;
		}
		break;
	case 'G':
		if (enfriamiento == 'F') {
			precio = 937.7;
		}
		else {
			precio = 1379;
		}
		break;
	}
	cout << "Monto a pagar: " << precio<<endl;
	system("pause");
	return 0;
}