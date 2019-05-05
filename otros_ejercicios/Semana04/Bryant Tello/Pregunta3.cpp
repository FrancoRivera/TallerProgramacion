#include <iostream>
using namespace std;

float pago(char*m, char *a,int*d)
{
	float *pt ;
	pt = new float;
	if (*m == 'E')
		*pt = 12.5;
	else if(*m=='J')
		*pt = 15.8;
	else
		*pt = 18.9;

	if (*a == 'N')
		*pt += 0;
	else if(*a=='H')
		*pt += 5;
	else if (*a == 'T')
		*pt += 7;
	else
		*pt += 10;//*pt=*pt=+10;
	if (*d == 1 || *d == 3)
	{
		*pt = *pt * .89;
		return *pt;
	}
	else
		return *pt;
}
int main()
{
	char *m, *a;
	int *d;
	m = new char;
	a = new char;
	d = new int;

	cout << "Tipo de menú(E: económico; J: ejecutivo; S: especial):";
	cin >> *m;
	if (*m != 'E' && *m != 'J' && *m != 'S')
		cout << "Error";
	else
	{
		cout << "Adicional (N: nada; H: helado; T: torta; A: ambos):";
		cin >> *a;
		if (*a != 'N'&&*a != 'H'&&*a!= 'T'&& *a!='A')
			cout << "Error";
		else {
			cout << "Día de la semana (un valor entre 1 y 7):";
			cin >> *d;
			if (*d < 1 || *d>7)
				cout << "Error";
			else
				cout << "El monto a pagar es " << pago(m, a, d);
		}

	}
	
	cout << endl;
	system("pause");
}