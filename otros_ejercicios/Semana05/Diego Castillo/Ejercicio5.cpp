#include <iostream>

using namespace std;

int main()
{
	bool* input_correcto = new bool;
	*input_correcto = false;
	int* personas = new int;
	do
	{
		cout << "Ingrese el numero de personas: ";
		cin >> *personas;

		if (*personas <= 0)
			cout << "No se pueden ingresar 0 o menos personas\n";
		else
			*input_correcto = true;
	} while (!*input_correcto);

	int* ninios = new int;
	*ninios = 0;
	int* jovenes = new int;
	*jovenes = 0;
	int* adultos = new int;
	*adultos = 0;
	int* adultos_mayores = new int;
	*adultos_mayores = 0;

	int* edad = new int;
	for (int i = 0; i < *personas; ++i)
	{
		*input_correcto = false;
		do
		{
			cout << "Edad de persona " << i + 1 << ": ";
			cin >> *edad;
			if (*edad <= 0)
				cout << "Una persona no puede tener edad negativa o ser 0\n";
			else
				*input_correcto = true;
		} while (!*input_correcto);

		if (*edad >= 0 && *edad <= 12)
			++*ninios;
		else if (*edad >= 13 && *edad <= 29)
			++*jovenes;
		else if (*edad >= 30 && *edad <= 59)
			++*adultos;
		else
			++*adultos_mayores;
	}

	cout.precision(2);

	cout << "Porcentaje de ninios: " 
		<< fixed << *ninios * 100 / float(*personas) << '\n';
	
	cout << "Porcentaje de jovenes: " 
		<< fixed << *jovenes * 100 / float(*personas) << '\n';
	
	cout << "Porcentaje de adultos: " 
		<< fixed << *adultos * 100 / float(*personas) << '\n';
	
	cout << "Porcentaje de adultos mayores: " 
		<< fixed << *adultos_mayores * 100 / float(*personas) << '\n';
	cin.ignore();
	cin.get();
	return 0;
}