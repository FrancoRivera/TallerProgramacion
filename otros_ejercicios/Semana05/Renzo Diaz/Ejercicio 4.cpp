#include <iostream>
using namespace std;

int Secuencia(int n)
{
	int suma = 0;
	for (int i = 1; i <= n; i++)
	{
		suma += i * i;
	}
	return suma;
}

int main()
{
	int *n = new int;
	
	do{
		system("cls");
		cout << "Ingrese n: ";
		cin >> *n;
	}while(!(*n > 0));

	cout << "La suma es: " << Secuencia(*n);
	
	return 0;
}
