#include <iostream>

using namespace std;

int main()
{
	bool* dato_correcto = new bool;
	*dato_correcto = false;
	int* n = new int;
	do
	{
		cout << "Ingrese el valor de N: ";
		cin >> *n;
		
		if (*n <= 0)
			cout << "N debe ser positivo.\n";
		else
			*dato_correcto = true;
	} while (!*dato_correcto);

	*dato_correcto = false;
	double* a = new double;
	do
	{
		cout << "Ingrese el valor de a: ";
		cin >> *a;

		if (!(*a >= 1 && *a <= 4))
			cout << "a debe ser entre 1 y 4.\n";
		else
			*dato_correcto = true;
	} while (!*dato_correcto);

	double* resultado = new double;
	*resultado = 0;
	int* denominador = new int;
	*denominador = 2;
	int* contador = new int;
	*contador = 2;
	for (int i = 0; i < *n; ++i)
	{
		*resultado += (*a / *denominador);
		*contador += 2;
		*denominador += *contador;
	}
	cout << "Resultado: " << *resultado << '\n';

	cin.ignore();
	cin.get();
	return 0;
}