#include <iostream>
using namespace std;

void IngresoDatos(float *salario, int *personas)
{
datos:	
	system("cls");
	cout << "Ingrese el salario mensual: ";
	cin >> *salario;
	
	if( !(*salario >= 0) )
	{
		cout << "Error en el salario" << endl;
		system("pause");
		goto datos; 
	}
	
	cout << "Ingrese numero de personas a cargo: ";
	cin >> *personas;
	
	if( !(*personas >= 1) )
	{
		cout << "Error en el numero de personas" << endl;
		system("pause");
		goto datos; 
	}
}

void ProcesoDatos(float *salario, int *personas, bool *linea)
{
	if(*personas == 1)
	{
		if(*salario <= 500)
			*linea = true;
		else
			*linea = false;
	}
	else if(*personas >= 2 && *personas <= 4)
	{
		if(*salario <= 750)
			*linea = true;
		else
			*linea = false;
	}
	else if(*personas > 4)
	{
		if(*salario <= 1000)
			*linea = true;
		else
			*linea = false;
	}	
}
void SalidaDatos(bool *linea)
{
	if(*linea)
		cout << "Tipo de línea al que puede acceder: Pre Pago" << endl;
	else
		cout << "Tipo de línea al que puede acceder: Post Pago" << endl;	
}



int main()
{
	float *salario = new float;
	int *personas = new int;
	bool *linea = new bool; //true = pre pago, false = post pago
	
	IngresoDatos(salario, personas);
	ProcesoDatos(salario, personas, linea);
	SalidaDatos(linea);

	system("pause");
	return 0;
}
