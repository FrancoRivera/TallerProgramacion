#include <iostream>
using namespace std;

void IngresoDatos(int *hora, int *ubicacion)
{
	datos:
	system("cls");
	cout << "Ingrese la ubicacion: ";
	cin >> *ubicacion;
	
	if( !(*ubicacion == 1 || *ubicacion == 0)  )
	{
		cout << "Error en el tipo de ubicacion" << endl;
		system("pause");
		goto datos;
	}
	
	cout << "Ingrese la hora de la llamada: ";
	cin >> *hora;
	
	if( !( ( (*hora / 100) >= 0 && (*hora / 100) <= 23) && ((*hora % 100) >= 0) && (*hora % 100) <= 59 ) )
	{
		cout << "Error en la hora de la llamada" << endl;
		system("pause");
		goto datos;
	}
}

void ProcesoDatos(int *hora, int *ubicacion, int *grado)
{
	*grado = 0;
	
	if(*hora >= 0 && *hora <=600)
		*grado += 500;
	else if (*hora >= 601 && *hora <=1200)
		*grado += 200;
	else if (*hora >= 1201 && *hora <=1800)
		*grado += 300;	
	else if (*hora >= 1801 && *hora <=2359)
		*grado += 400;
		
		
	if((bool)(*ubicacion))
		*grado += 2000;	
	else
		*grado += 1000;	
}

void IngresoDatos(int *grado)
{
	if(*grado >= 1000 && *grado < 1500)
		cout << "Accion: POSIBLE RESCATE" << endl;
	else if(*grado >= 1500 && *grado < 1800)
		cout << "Accion: RESCATE EN ALERTA AMARILLA" << endl;	
	else if(*grado >= 1800 && *grado < 2200)
		cout << "Accion: RESCATE EN ALERTA ROJA" << endl;		
	else
		cout << "Accion: RESCATE INMINENTE" << endl;
}

int main()
{
	//setlocate(LC_ALL, "");   <- Para que salgan tildes (En Visual Studio)
	
	int *hora = new int;
	int *ubicacion = new int;
	int *grado = new int;
	
	IngresoDatos(hora, ubicacion);
	ProcesoDatos(hora, ubicacion, grado);
	IngresoDatos(grado);
		
	system("pause");
	return 0;
}
