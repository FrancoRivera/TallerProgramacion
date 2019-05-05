#include <iostream>

using namespace std;

int main()
{
	int* numero_entrada = new int;
	int* numeros_leidos = new int;
	int* numeros_capicua = new int;
	*numeros_leidos = 0;
	*numeros_capicua = 0;
	do
	{
		cout << "Ingrese un numero: ";
		cin >> *numero_entrada;
		if (*numero_entrada > 0)
		{
			++*numeros_leidos;
			
			int* aux = new int;
			*aux = *numero_entrada;
			
			int* digito = new int;
			
			int* numero_reves = new int;
			*numero_reves = 0;
			
			do
			{
				*digito = *aux % 10;
				*numero_reves = (*numero_reves * 10) + *digito;
				*aux /= 10;
			} while (*aux > 0);
			
			if (*numero_reves == *numero_entrada)
				++*numeros_capicua;
		}
	} while (*numero_entrada > 0);

	cout << "Numeros Leidos: " << *numeros_leidos << '\n';
	cout << "Cantidad de capicuas: " << *numeros_capicua << '\n';

	cin.ignore();
	cin.get();
	return 0;
}