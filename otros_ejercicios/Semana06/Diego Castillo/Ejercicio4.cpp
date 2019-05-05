#include <iostream>

using namespace std;

int main()
{
	bool* entrada_correcta = new bool;

	char* tipo_usuario = new char;
	int* hora_acceso = new int;
	char* tipo_servicio = new char;

	int* profesores = new int;
	*profesores = 0;
	int* alumnos = new int;
	*alumnos = 0;
	int* administrativos = new int;
	*administrativos = 0;

	int* madrugada = new int;
	*madrugada = 0;
	int* maniana = new int;
	*maniana = 0;
	int* tarde = new int;
	*tarde = 0;
	int* noche = new int;
	*noche = 0;

	int* personal = new int;
	*personal = 0;
	int* academico = new int;
	*academico = 0;
	int* administrativo = new int;
	*administrativo = 0;


	while (true)
	{
		*entrada_correcta = false;
		do
		{
			cout << "Tipo de usuario (P: Profesor; A: Alumno: D: Administrativo): ";
			cin >> *tipo_usuario;
			*tipo_usuario = char(toupper(*tipo_usuario));

			if (*tipo_usuario != 'P' && *tipo_usuario != 'A' && *tipo_usuario != 'D' && *tipo_usuario != 'X')
				cout << "Inserte bien el tipo de usuario\n";
			else
				*entrada_correcta = true;

		} while (!*entrada_correcta);
		if (*tipo_usuario == 'X')
			break;

		*entrada_correcta = false;
		do
		{
			cout << "Hora de acceso (Entero positivo entre 0 y 23): ";
			cin >> *hora_acceso;

			if (!(*hora_acceso >= 0 && *hora_acceso <= 23))
				cout << "Inserte bien la hora de entrada\n";
			else
				*entrada_correcta = true;

		} while (!*entrada_correcta);

		*entrada_correcta = false;
		do
		{
			cout << "Tipo de servicio (P: Personal; A: AcadŽmico; D: Administrativo): ";
			cin >> *tipo_servicio;
			*tipo_servicio = char(toupper(*tipo_servicio));

			if (*tipo_servicio != 'P' && *tipo_servicio != 'A' && *tipo_servicio != 'D')
				cout << "Inserte bien el tipo de servicio\n";
			else
				*entrada_correcta = true;

		} while (!*entrada_correcta);

		// Obtener cantidad de tipos de usuarios
		switch (*tipo_usuario)
		{
		case 'P':
			++* profesores;
			break;
		case 'A':
			++* alumnos;
			break;
		case 'D':
			++* administrativos;
			break;
		}

		// Obtener en que tiempo se obtuvieron mayores accesos
		if (*hora_acceso >= 0 && *hora_acceso <= 5)
			++ * madrugada;
		else if (*hora_acceso >= 6 && *hora_acceso <= 12)
			++ * maniana;
		else if (*hora_acceso >= 13 && *hora_acceso <= 17)
			++ * tarde;
		else
			++ * noche;

		// Obtener si predominan los servicios
		switch (*tipo_servicio)
		{
		case 'P':
			++*personal;
			break;
		case 'A':
			++*academico;
			break;
		case 'D':
			++*administrativo;
			break;
		}
		cout << '\n';
	}
	cout << '\n';
	cout << "Los resultados son:\n";
	cout << "-----------------------\n";
	cout << "Profesores: " << *profesores << '\n';
	cout << "Alumnos: " << *alumnos << '\n';
	cout << "Administrativos: " << *administrativos << '\n';
	

	cout << "En la ";
	int* mayor = new int;
	*mayor = *madrugada;
	if (*maniana > *mayor)
		*mayor = *maniana;
	if (*tarde > *mayor)
		*mayor = *tarde;
	if (*noche > *mayor)
		*mayor = *noche;
	

	if (*mayor == *madrugada)
		cout << "MADRUGADA ";
	if (*mayor == *maniana)
		cout << "MANIANA ";
	if (*mayor == *tarde)
		cout << "TARDE ";
	if (*mayor == *noche)
		cout << "NOCHE ";
	cout << "se tuvieron mas accesos.\n";


	cout << "Predominan los servicios de:\n";
	*mayor = *personal;
	if (*academico > * mayor)
		* mayor = *academico;
	if (*administrativo > * mayor)
		* mayor = *administrativo;

	if (*mayor == *personal)
		cout << "Personal\n";
	if (*mayor == *administrativo)
		cout << "Adminsitrativo\n";
	if (*mayor == *academico)
		cout << "Academico\n";

	cin.ignore();
	cin.get();
	return 0;
}