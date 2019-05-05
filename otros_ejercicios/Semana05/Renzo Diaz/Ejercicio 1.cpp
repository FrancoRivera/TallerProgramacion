#include<iostream>
using namespace std;

void IngresoDatos(char *marca, char *sistema)
{
	do{
	system("cls");
	cout << "Marca (M: Mabe; L: LG; C: Coldex): ";
	cin >> *marca;
	cout << "Sistema de enfriamiento (F: Auto Frost; N: No Frost): ";
	cin >> *sistema;
	
	*marca = toupper(*marca);
	*sistema = toupper(*sistema);
	
	}while(!(  (*marca == 'M' ||*marca == 'L' || *marca == 'C') && (*sistema == 'N' ||*sistema == 'F') ));
}
void ProcesoDatos(char *marca, char *sistema, float *pago)
{
	switch(*marca)
	{
		case 'M':
			if(*sistema == 'F')
				*pago = 895.9f;
			else
				*pago = 1250;
			break;
			
		case 'L':
			if(*sistema == 'F')
				*pago = 975;
			else
				*pago = 1650;
			break;
			
		case 'C':
			if(*sistema == 'F')
				*pago = 937.7f;
			else
				*pago = 1379;
			break;
	}
}
void SalidaDatos(float *pago)
{
	cout << "Monto a pagar: " << *pago;
}
int main()
{
	char *marca = new char();
	char *sistema = new char();
	float *pago = new float();
	
	IngresoDatos(marca, sistema);
	ProcesoDatos(marca, sistema, pago);
	SalidaDatos(pago);
	
}
