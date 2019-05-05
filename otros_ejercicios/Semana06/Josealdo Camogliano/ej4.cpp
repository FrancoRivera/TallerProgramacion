#include <iostream>
using namespace std;
int main() {
	char usuario, servicio;
	int hora, n;
	int cont = 0;

	int contUPro = 0, contUAlum = 0, contUAdm = 0;
	int cMadrugada = 0, cManniana = 0, cTarde = 0, cNoche = 0;
	int contSPer = 0, contSAcm = 0, contSAdm = 0;

	while (1) {
		do {
			cout << "Tipo de usuario (P: Profesor, A: Alumno, D: Administrativo): ";
			cin >> usuario;
			usuario = tolower(usuario);
			if (usuario == 'p' || usuario == 'a' || usuario == 'd'|| usuario == 'x') break;
		} while (usuario != 'p' || usuario != 'a' || usuario != 'd' || usuario != 'x');
		if (usuario == 'x') break;
		do {
			cout << "Hora de acceso (Entero positivo entre 0 y 23): ";
			cin >> hora;
			if (hora >= 0 && hora <=23) break;
		} while (hora < 0 || hora >= 24);
		do {
			cout << "Tipo de servicio (P: Personal, A: Academico, D: Administrativo): ";
			cin >> servicio;
			servicio = tolower(servicio);
			if (servicio == 'p' || servicio == 'a' || servicio == 'd') break;
		} while (servicio != 'p' || servicio != 'a' || servicio != 'd');
		
		if (usuario == 'p') contUPro++;
		if (usuario == 'a') contUAlum++;
		if (usuario == 'd') contUAdm++;

		if (hora >= 0 && hora <= 5) cMadrugada++;
		if (hora >= 6 && hora <= 12) cManniana++;
		if (hora >= 13 && hora <= 17) cTarde++;
		if (hora >= 18 && hora <= 23) cNoche++;

		if (servicio == 'p') contSPer++;
		if (servicio == 'a') contSAcm++;
		if (servicio == 'd') contSAdm++;
		cout << endl;

		}
	cout << endl;
	cout << "Los resultados son: " << endl;
	cout << "-------------------------------" << endl;
	cout << "Profesores: " << contUPro << endl;
	cout << "Alumnos: " << contUAlum << endl;
	cout << "Administrativos: " << contUAdm << endl;

	if (cMadrugada > cManniana && cMadrugada > cTarde && cMadrugada > cNoche)
		cout << "En la MADRUGADA  se tuvieron mas accesos" << endl;
	if (cManniana > cMadrugada && cManniana > cTarde && cManniana > cNoche)
		cout << "En la MAÑANA  se tuvieron mas accesos" << endl;
	if (cTarde > cManniana && cTarde > cMadrugada && cTarde > cNoche)
		cout << "En la TARDE  se tuvieron mas accesos" << endl;
	if (cNoche > cManniana && cNoche > cTarde && cNoche > cMadrugada)
		cout << "En la NOCHE  se tuvieron mas accesos" << endl;

	if (contSPer >= contSAcm && contSPer >= contSAdm)
		cout << "Predominan los servicios de Personal" << endl;
	if (contSAcm >= contSPer && contSAcm >= contSAdm)
		cout << "Predominan los servicios de Academico" << endl;
	if (contSAdm >= contSAcm && contSAdm >= contSPer)
		cout << "Predominan los servicios de Administrativo" << endl;
	cout << endl;
	system("pause");
	return 0;
}