#include <iostream>

using namespace std;

int main()
{
	bool* input_correcto = new bool;
	*input_correcto = false;
	int* n = new int;
	do
	{
		cout << "Ingresar el valor de n: ";
		cin >> *n;

		if (*n <= 0)
			cout << "El valor de n no puede ser 0 o menos\n";
		else
			*input_correcto = true;
	} while (!*input_correcto);

	int* resultado = new int;
	*resultado = 0;
	for (int i = 1; i < *n + 1; ++i)
		*resultado += i*i;

	cout << "La suma de los cuadrados de los " << *n << 
		    " primeros numeros naturales es: " << *resultado;

	cin.ignore();
	cin.get();
	return 0;
}