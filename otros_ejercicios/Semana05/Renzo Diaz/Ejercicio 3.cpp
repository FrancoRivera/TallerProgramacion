#include <iostream>
using namespace std;

void IngresoDatos(int *numerador, int *denominador)
{
	cout << "Ingrese el numerador: "; 
	cin >> *numerador;
	
	cout << "Ingrese el denominador:: "; 
	cin >> *denominador;
}
void ProcesoDatos(int *numerador, int *denominador, int *cociente)
{
	*cociente = 0;
	while(numerador > denominador) 
	{
		*denominador -= *numerador;
		*cociente++;
	}
}
void SalidaDatos(int *numerador, int *cociente)
{
	cout << "El resto es: " << *numerador << endl;
	cout << "El cociente es: " << *cociente << endl;	
}

int main()
{
	
	int *numerador = new int;
	int *denominador = new int;
	int *cociente = new int;
	
	IngresoDatos(numerador, denominador);
	ProcesoDatos(numerador, denominador, cociente);
	SalidaDatos(numerador, cociente);
	
	return 0;
}
