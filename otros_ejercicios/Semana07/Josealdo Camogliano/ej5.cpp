#include <iostream>
using namespace std;
int main() {
	char cliente, servicio;
	int hora;
	int contExtranjero = 0, contNacional = 0;
	int contMadrugada = 0, contManniana = 0, contTarde = 0, contNoche = 0;
	int contPasajes = 0, contHoteles = 0, contExcursiones = 0;
	while (true) {
		do {
			cout << "Tipo Cliente (E: Extranjero, N: Nacional): ";
			cin >> cliente;
			cliente = toupper(cliente);
			if (cliente == 'E' || cliente == 'N' || cliente == 'F') break;
		} while (cliente != 'E' || cliente != 'N' || cliente != 'F');
		if (cliente == 'F') break;
		do {
			cout << "Hora de Acceso (0 a 23): ";
			cin >> hora;
			if (hora >= 0 && hora <= 23) break;
		} while (hora < 0 || hora >23);
		do {
			cout << "Tipo Servicio (P: Pasajes, H: Hoteles, E: Excursiones): ";
			cin >> servicio;
			servicio = toupper(servicio);
			if (servicio == 'P' || servicio == 'H' || servicio == 'E')break;
		} while (servicio != 'P' || servicio != 'H' || servicio != 'E');
		cout << endl;
		if (cliente == 'E') contExtranjero++;
		if (cliente == 'N')contNacional++;

		if (hora >= 0 && hora <= 5) contMadrugada++;
		if (hora >= 6 && hora <= 12)contManniana++;
		if (hora >= 13 && hora <= 17) contTarde++;
		if (hora >= 18 && hora <= 23) contNoche++;

		if (servicio == 'P') contPasajes++;
		if (servicio == 'H') contHoteles++;
		if (servicio == 'E') contExcursiones++;
	}
	cout << endl;
	cout << "Los resultados son: " << endl;
	cout << "==============================" << endl;
	cout << "Extranjeros: " << contExtranjero << endl;
	cout << "Nacionales: " << contNacional << endl;
	if (contMadrugada > contManniana && contMadrugada > contTarde && contMadrugada > contNoche)
		cout << "En la MADRUGADA se tuvieron mas accesos" << endl;
	if (contManniana > contMadrugada && contManniana > contTarde && contManniana > contNoche)
		cout << "En la MANNIANA se tuvieron mas accesos" << endl;
	if (contTarde > contManniana && contTarde > contMadrugada && contTarde > contNoche)
		cout << "En la TARDE se tuvieron mas accesos" << endl;
	if (contNoche > contManniana && contNoche > contTarde && contNoche > contMadrugada)
		cout << "En la NOCHE se tuvieron mas accesos" << endl;
	cout << "Predominan los servicios de: ";
	if (contPasajes >= contHoteles && contPasajes >= contExcursiones)
		cout << "\tReserva de pasajes" << endl;
	if (contHoteles >= contPasajes && contHoteles >= contExcursiones)
		cout << "\t\t\t\tReserva de hoteles" << endl;
	if (contExcursiones >= contHoteles && contExcursiones >= contPasajes)
		cout << "\t\t\t\tReserva de excurciones" << endl;
	cout << endl;
	system("pause");
	return 0;
}