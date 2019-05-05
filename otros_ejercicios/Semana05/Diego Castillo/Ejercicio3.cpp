#include <iostream>

using namespace std;

int main()
{
	bool* input_correcto = new bool;
	*input_correcto = false;
	int* numerador = new int;
	do
	{
		cout << "Ingrese el numerador: ";
		cin >> *numerador;

		if (*numerador < 0)
			cout << "El denominador no puede ser menor negativo\n";
		else
			*input_correcto = true;
	} while (!*input_correcto);


	*input_correcto = false;
	int* denominador = new int;
	do
	{
		cout << "Ingrese el denominador: ";
		cin >> *denominador;

		if (*denominador == 0)
			cout << "El denominador no puede ser 0\n";
		else if (*denominador < 0)
			cout << "El denominador no puede ser menor negativo\n";
		else
			*input_correcto = true;
	} while (!*input_correcto);


	int* cociente = new int;
	*cociente = 0;
	int* resto = new int;
	*resto = *numerador;
	while (*numerador - *denominador >= 0)
	{
		++*cociente;
		*numerador -= *denominador;
		*resto = *numerador;
	}
	cout << "El resto es: " << *resto << '\n';
	cout << "El cociente es: " << *cociente << '\n';

	cin.ignore();
	cin.get();
	return 0;
}