#include <iostream>
using namespace std;

void IngresoDatos(int *escala, int *horas)
{
datos:	
	system("cls");
	cout << "Ingrese la escala: ";
	cin >> *escala;
	if( !(*escala >= 1 && *escala <= 8) )
	{
		cout << "Error en la escala";
		system("pause");
		goto datos;
	}
	
	cout << "Ingrese cantidad de horas trabajadas en la semana: ";
	cin >> *horas;
	if( !(*horas == 24 || *horas == 30 ||*horas == 40) )
	{
		cout << "Error en las horas";
		system("pause");
		goto datos;
	}	
}

void Proceso(int *escala, int *horas, float *remuneracion)
{
	*remuneracion = 0;
	switch(*escala)
	{
		case 1:
			*remuneracion = 51.79f;
			break;
		case 2:
			*remuneracion = 59.58f;
			break;
		case 3:
			*remuneracion = 67.37f;
			break;
		case 4:
			*remuneracion = 77.70f;
			break;
		case 5:
			*remuneracion = 93.29f;
			break;
		case 6:
			*remuneracion = 108.83f;
			break;
		case 7:
			*remuneracion = 119.20f;
			break;	
		case 8:
			*remuneracion = 129.54f;
			break;			
	}
	
	*remuneracion *= *horas;
}
void Salida(float *remuneracion)
{
	cout << "Su remuneración mensual es " << (int)(*remuneracion) << endl;
}

int main()
{
	int *escala = new int;
	int *horas = new int;
	float *remuneracion = new float;
	
	IngresoDatos(escala, horas);
	Proceso(escala, horas, remuneracion);
	Salida(remuneracion);
	
	system("pause");
	return 0;
}
