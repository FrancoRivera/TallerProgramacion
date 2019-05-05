#include <iostream>

using namespace std;

int main()
{
	bool* input_correcto = new bool;
	*input_correcto = false;
	char* marca = new char;
	do
	{
		cout << "Marca (M: Mabe; L: LG; C: Coldex): ";
		cin >> *marca;
		*marca = char(toupper(*marca));

		if (*marca != 'M' && *marca != 'L' && *marca != 'C')
			cout << "Por favor ingrese bien la marca\n";
		else
			*input_correcto = true;
	} while (!*input_correcto);


	*input_correcto = false;
	char* sistema_enfriamiento = new char;
	do
	{
		cout << "Sistema de enfriamiento (F: Auto Frost; N: No Frost): ";
		cin >> *sistema_enfriamiento;
		*sistema_enfriamiento = char(toupper(*sistema_enfriamiento));

		if (*sistema_enfriamiento != 'F' && *sistema_enfriamiento != 'N')
			cout << "Por favor ingrese bien el sistema de enfriamiento\n";
		else
			*input_correcto = true;
	} while (!*input_correcto);


	float* precio = new float;

	switch (*marca)
	{
	case 'M':
		switch (*sistema_enfriamiento)
		{
		case 'F':
			*precio = 895.9f;
			break;
		case 'N':
			*precio = 1250.f;
			break;
		}
		break;
	case 'L':
		switch (*sistema_enfriamiento)
		{
		case 'F':
			*precio = 975.f;
			break;
		case 'N':
			*precio = 1650.f;
			break;
		}
		break;
	case 'C':
		switch (*sistema_enfriamiento)
		{
		case 'F':
			*precio = 937.7f;
			break;
		case 'N':
			*precio = 1379.f;
			break;
		}
		break;
	}
	cout << "Monto a pagar: " << *precio;

	cin.ignore();
	cin.get();
	return 0;
}