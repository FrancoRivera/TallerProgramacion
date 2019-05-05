#include <iostream>

using namespace std;

int main()
{
	bool* dato_correcto = new bool;
	*dato_correcto = false;
	int* n = new int;
	*n = 0;

	do
	{
		cout << "Ingrese N: ";
		cin >> *n;

		if (!(*n >= 1 && *n <= 100))
			cout << "N debe ser entre 1 y 100.\n";
		else
			*dato_correcto = true;
	} while (!*dato_correcto);

	char* sexo = new char;
	int* edad = new int;
	char* estado_civil = new char;
	int* mujeres_b_16entre21 = new int;
	*mujeres_b_16entre21 = 0;
	int* hombres = new int;
	*hombres = 0;
	int* mujeres = new int;
	*mujeres = 0;
	int* hombres_aOd_mayor35 = new int;
	*hombres_aOd_mayor35 = 0;
	for (int i = 0; i < *n; ++i)
	{
		do
		{
			cout << "Sexo de la persona (m: masculino; f: femenino): ";
			cin >> *sexo;
			*sexo = char(toupper(*sexo));
		} while (*sexo != 'M' && *sexo != 'F');

		do
		{
			cout << "Edad (valor mayor a 14): ";
			cin >> *edad;
		} while (*edad <= 14);

		do
		{
			cout << "Estado Civil (a: Soltero; b: Casado; c: Viudo; d: Divorciado): ";
			cin >> *estado_civil;
			*estado_civil = char(toupper(*estado_civil));
		} while (*estado_civil != 'A' && *estado_civil != 'B' && *estado_civil != 'C' && *estado_civil != 'D');

		switch (*sexo)
		{
		case 'M':
			++*hombres;
			switch (*estado_civil)
			{
			case 'A':
			case 'D':
				if (*edad > 35)
					++*hombres_aOd_mayor35;
				break;
			}
			break;
		case 'F':
			++*mujeres;
			switch (*estado_civil)
			{
			case 'B':
				if (*edad >= 16 && *edad <= 21)
					++*mujeres_b_16entre21;
				break;
			}
			break;
		}
	}

	cout << '\n';
	cout << "Mujeres casadas que estan entre los 16 y 21 anios inclusive: " << *mujeres_b_16entre21 << '\n';
	cout << "El porcentaje de hombres encuestados: " << (*hombres * 100) / double((*mujeres + *hombres)) << "%\n";
	cout << "El porcentaje de mujeres encuestadas: " << (*mujeres * 100) / double((*mujeres + *hombres)) << "%\n";
	cout << "El numero de hombres mayores de 35 anios solteros o divorciados: " << *hombres_aOd_mayor35;

	cin.ignore();
	cin.get();
	return 0;
}