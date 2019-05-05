#include <iostream>

using namespace std;

int main()
{
	bool* input_correcto = new bool;
	*input_correcto = false;
	char* categoria = new char;
	do
	{
		cout << "Ingresa la categoria (C: comercial; R: residencial): ";
		cin >> *categoria;
		*categoria = char(toupper(*categoria));

		if (*categoria != 'C' && *categoria != 'R')
			cout << "Por favor ingrese bien la categoria\n";
		else
			*input_correcto = true;
	} while (!*input_correcto);


	*input_correcto = false;
	char* zona = new char;
	do
	{
		cout << "Ingresa la zona (A, B o C): ";
		cin >> *zona;
		*zona = char(toupper(*zona));

		switch (*categoria)
		{
		case 'C':
			if (*zona == 'C')
				cout << "Error en zona comercial no existe zona C\n";
			if (*zona != 'A' && *zona != 'B')
				cout << "Por favor ingrese bien la zona\n";
			else
				*input_correcto = true;
			break;
		case 'R':
			if (*zona != 'A' && *zona != 'B' && *zona != 'C')
				cout << "Por favor ingrese bien la zona\n";
			else
				*input_correcto = true;
			break;
		}
	} while (!*input_correcto);

	
	*input_correcto = false;
	char* tipo = new char;
	do
	{
		cout << "Ingresa el tipo (T: terreno; C: casa; D: departamento): ";
		cin >> *tipo;
		*tipo = char(toupper(*tipo));

		if (*tipo != 'T' && *tipo != 'C' && *tipo != 'D')
			cout << "Por favor ingrese bien la zona\n";
		else
			*input_correcto = true;
	} while (!*input_correcto);

	
	*input_correcto = false;
	int* area = new int;
	do
	{
		cout << "Ingrese el area: ";
		cin >> *area;
		*area = char(toupper(*area));

		if (*area <= 0)
			cout << "Por favor ingrese un area mayor a 0\n";
		else
			*input_correcto = true;
	} while (!*input_correcto);


	float* monto = new float;
	switch (*categoria)
	{
	case 'C':
		switch (*zona)
		{
		case 'A':
			switch (*tipo)
			{
			case 'T':
				*monto = *area * 2200;
				break;
			case 'C':
				*monto = *area * 2500;
				break;
			case 'D':
				*monto = *area * 2100;
				break;
			}
			break;
		case 'B':
			switch (*tipo)
			{
			case 'T':
				*monto = *area * 1300;
				break;
			case 'C':
				*monto = *area * 1500;
				break;
			case 'D':
				*monto = *area * 1200;
				break;
			}
			break;
		}
		break;
	case 'R':
		switch (*zona)
		{
		case 'A':
			switch (*tipo)
			{
			case 'T':
			case 'D':
				*monto = *area * 2100;
				break;
			case 'C':
				*monto = *area * 2500;
				break;
			}
			break;
		case 'B':
			switch (*tipo)
			{
			case 'T':
				*monto = *area * 1500;
				break;
			case 'C':
				*monto = *area * 1600;
				break;
			case 'D':
				*monto = *area * 1300;
				break;
			}
			break;
		case 'C':
			switch (*tipo)
			{
			case 'T':
				*monto = *area * 1100;
				break;
			case 'C':
				*monto = *area * 1300;
				break;
			case 'D':
				*monto = *area * 1000;
				break;
			}
			break;
		}
		break;
	}
	cout << "El monto a cancelar es de $ " << *monto;

	cin.ignore();
	cin.get();
	return 0;
}