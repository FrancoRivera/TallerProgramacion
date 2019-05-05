#include <iostream>
using namespace std;

void IngresoDatos(char *tipo, char *adicional, int *dia)
{
datos:
	system("cls");
	cout << "Tipo de menu (E: económico; J: ejecutivo; S: especial): ";
	cin >> *tipo;
	*tipo = toupper(*tipo);
	
	if( !(*tipo == 'E' || *tipo == 'J' || *tipo == 'S') )
	{
		cout << "Error en el tipo de menu" << endl;
		system("pause");
		goto datos;
	}
	
	cout << "Adicional (N: nada; H: helado; T: torta; A: ambos): ";
	cin >> *adicional;
	*adicional = toupper(*adicional);
	
	if( !(*adicional == 'N' || *adicional == 'H' || *adicional == 'T' || *adicional == 'A') )
	{
		cout << "Error en el adicional" << endl;
		system("pause");
		goto datos;
	}
	
	cout << "Dia de la semana (un valor entre 1 y 7): ";
	cin >> *dia;
	
	if( !(*dia >= 1 && *dia <= 7) )
	{
		cout << "Error en el dia" << endl;
		system("pause");
		goto datos;
	}
}
void Proceso(char *tipo, char *adicional, int *dia, float *total)
{
	*total = 0;
	switch(*tipo)
	{
		case 'E':
			*total += 12.5f;
			break;
		case 'J':
			*total += 15.8f;
			break;
		case 'S':
			*total += 18.9f;
			break;
	}
	
	switch(*adicional)
	{
		case 'H':
			*total += 5;
			break;
		case 'T':
			*total += 7;
			break;
		case 'A':
			*total += 10;
			break;
		default:
			break;
	}
	
	if(*dia == 1 ||*dia == 3)
		*total *= 0.89;
}
void Salida(float *total)
{
	cout.precision(4);
	cout << "Monto a pagar: " << *total << endl;
}

int main()
{
	char *tipo = new char;
	char *adicional = new char;
	int *dia = new int;
	float *total = new float;
	
	IngresoDatos(tipo, adicional, dia);
	Proceso(tipo, adicional, dia, total);
	Salida(total);
	
	
	system("pause");
	return 0;
}
