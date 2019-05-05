#include <iostream>
#include <math.h>
using namespace std;

void Ingreso(int *arista)
{
	cout << "Ingrese la arista: ";
	cin >> *arista;
}
void Proceso(int *precio, int *volumen, int *arista, int *area, int* monto)
{
	*volumen = pow(*arista, 3);

	*precio =	(*volumen < 70) * (2.5) +
				(*volumen >= 70 && *volumen <= 150) * (5) +
				(*volumen > 150) * (10);

	*area = 5 * ( (*arista) * (*arista) );

	*monto = (*precio) * (*area);
}
void Salida(int *volumen, int *monto)
{
	cout << "Volumen = " << *volumen << endl;
	cout << "Su monto a pagar es " << *monto << " soles" << endl;
}

int main()
{
	int *arista = new int;
	int *volumen = new int;
	int *area = new int;
	int *monto = new int;
	int *precio = new int;

	Ingreso(arista);
	Proceso(precio, volumen, arista, area, monto);
	Salida(volumen, monto);

	system("pause");
	return 0;
}