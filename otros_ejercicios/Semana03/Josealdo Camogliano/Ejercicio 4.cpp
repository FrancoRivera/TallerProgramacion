#include <iostream>

using namespace std;

void Ingreso(float *salario, int *personas)
{
		cout << "Ingrese su salario mensual: ";
	cin >> *salario;
	
	cout << "Ingrese el numero de personas a cargo: ";
	cin >> *personas;
}
void Proceso(float *salario, int *personas, char *linea)
{
	*linea =(80) * ( (*salario) < 500 && (*personas) == 1 ) +
	 		(80) * ( (*salario) < 750 && ( (*personas) >= 2 && (*personas) <= 4 ) ) +
	 		(80) * ( (*salario) < 1000 && (*personas) > 4 ) +
	 		(79) * ( (*salario) > 500 && (*personas) == 1 ) +
			(79) * ( (*salario) > 750 && ( (*personas) >= 2 && (*personas) <= 4 ) ) +
	 		(79) * ( (*salario) < 1000 && (*personas) > 4 );
}
void Salida(char *linea)
{
	cout << "Tipo de línea al que puede acceder: " << *linea << endl;
}


int main()
{
	float *salario = new float;
	int *personas = new int;
	char *linea = new char;
	
	Ingreso(salario, personas);	
	Proceso(salario, personas, linea);
	Salida(linea);
	
	system("pause");
	return 0;
}
