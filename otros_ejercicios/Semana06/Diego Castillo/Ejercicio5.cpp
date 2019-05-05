#include <iostream>

using namespace std;

int main()
{
	int* n = new int;
	do
	{
		cout << "Ingrese N: ";
		cin >> *n;
	} while (!(*n > 0 && *n < 20));

	double* x = new double;
	cout << "Ingrese x: ";
	cin >> *x;

	double* a = new double;
	cout << "Ingrese a: ";
	cin >> *a;

	double* expresion = new double;
	int* exponente = new int;
	int* numerador = new int;
	int* denominador = new int;
	*denominador = 1;
	int* i = new int;
	double* resultado = new double;
	*resultado = 0;

	for (*i = 1; *i <= *n; ++*i)
	{
		*exponente = *i;
		*numerador = (*i + 1);
		*expresion = (*numerador * pow(*x, *exponente)) / (*denominador * *a);
		if (*i % 2 != 0)
			*expresion *= -1;
		*resultado += *expresion;

		*denominador += 2;
	}
	cout << '\n';
	cout << "El resultado de la serie sera: " << *resultado << '\n';

	cin.ignore();
	cin.get();
	return 0;
}