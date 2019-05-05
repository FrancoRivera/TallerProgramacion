#include <iostream>

using namespace std;

int main() {
	char tipoCliente,tipoServicio;

	int horaAcceso;
	int mayor = 0;
	int contE = 0, contN = 0;
	int contMad = 0, contMan = 0, contTar = 0, contNoc = 0;
	int contTP = 0, contTH = 0, contTE = 0;
	do {
		cout << "Ingrese tipo de cliente: ";
		cin >> tipoCliente;
		tipoCliente = toupper(tipoCliente);
		cout << "Ingrese hora de acceso";
		cin >> horaAcceso;
		cout << "Ingrese tipo de servicio: ";
		cin >> tipoServicio;
		tipoServicio = toupper(tipoServicio);

		if (tipoCliente=='E') {
			contE++;
		}
		else {
			contN++;
		}
		if (horaAcceso >= 18) {
			contNoc++;
		}
		else if (horaAcceso >= 13) {
			contTar++;
		}
		else if (horaAcceso >= 6) {
			contMan++;
		}
		else {
			contMad++;
		}

		switch (tipoServicio)
		{
		case 'P':
			contTP++;
			if (mayor<contTP) {
				mayor = contTP;
			}
			break;
		case 'H':
			contTH++;
			if (mayor < contTH) {
				mayor = contTH;
			}
			break;
		case 'E':
			contTE++;
			if (mayor < contTE) {
				mayor = contTE;
			}
			break;
		default:
			break;
		}

	} while (tipoCliente != 'F');

	system("pause");
	return 0;
}