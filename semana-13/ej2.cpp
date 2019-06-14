// ej2.cpp : main project file.

#include <iostream>
#include <conio.h>

const int MAX = 15;

using namespace std;
using namespace System;

//estructura de empleado

struct Empleado {
	int horas = 0;
	char oficina = ' ';
	int minutos_tardanza = 0;
};

//1 . Generar arreglo
void genera_arreglo(Empleado * empleados) {
	Random rand;
	char opciones[3] = { 'C', 'S', 'L' };

	for (int i = 0; i < MAX; i++)
	{
		// empleados[i] = { 43, 'C', 39 };
		empleados[i].horas = rand.Next(20, 51);
		empleados[i].oficina = opciones[rand.Next(0, 3)];
		empleados[i].minutos_tardanza = rand.Next(0, 181);
	}
}

//2 . Imprimir arreglo
void imprimir_arreglo(Empleado * empleados) {
	cout << "ID \t" << "Horas Trabajadas\t" << "Oficina\t" << "Minutos de Tardanza" << endl;
	cout << "================================================"<< endl;
	for (int i = 0; i < MAX; i++)
	{
		cout << i << "\t";
		cout << empleados[i].horas << "\t";
		cout << empleados[i].oficina<< "\t";
		cout << empleados[i].minutos_tardanza << "\t" << endl;
	}

}

//3 . Empleado mas trabajdores 
void empleados_mas_trabajadores(Empleado * empleados) {
	int mayor_horas = 0;
	int codigo = 0;
	for (int i = 0; i < MAX; i++)
	{
		if (empleados[i].horas > mayor_horas) {
			mayor_horas = empleados[i].horas;
			codigo = i;
		}
	}
	cout << "\n\n======================================\n";
	cout << codigo << "\t";
	cout << empleados[codigo].horas << "\t";
	cout << empleados[codigo].oficina << "\t";
	cout << empleados[codigo].minutos_tardanza << "\t" << endl;
}
float promedio_de_tardanzas_por_oficina_especifico(Empleado * empleados) {
	int suma = 0;
	int cant = 1;
	for (int i = 0; i < MAX; i++)
	{	
		if (&empleados[i] != nullptr) {
			suma += empleados[i].minutos_tardanza;
			cant++;
		}
		
	}
	return suma / cant;
}

//4 . Promedio de Tardandazas por oficina
void promedio_de_tardanzas_por_oficina(Empleado * empleados) {
	Empleado * empleados_C = new Empleado[MAX];
	Empleado * empleados_S = new Empleado[MAX];
	Empleado * empleados_L = new Empleado[MAX];

	for (int i = 0; i < MAX; i++)
	{
		if (empleados[i].oficina == 'C') empleados_C[i] = empleados[i];
		if (empleados[i].oficina == 'S') empleados_S[i] = empleados[i];
		if (empleados[i].oficina == 'L') empleados_L[i] = empleados[i];
	}
	cout << "\n\n======================================\n";
	cout << "==Promedio Tardanzas por oficina======\n";
	cout << "======================================\n";
	cout << "Oficina C: " << promedio_de_tardanzas_por_oficina_especifico(empleados_C) << endl;
	cout << "Oficina S: " << promedio_de_tardanzas_por_oficina_especifico(empleados_S) << endl;
	cout << "Oficina L: " << promedio_de_tardanzas_por_oficina_especifico(empleados_L) << endl;
	
}


//5 . Empleados Puntuales
void empleados_puntuales(Empleado * empleados) {
	cout << "\n======================================\n";
	for (int i = 0; i < MAX; i++)
	{
		if (empleados[i].minutos_tardanza == 0) {
			cout << "Empleado " << i << " es puntual" << endl;
		}	
	}
}


//6 . Ordena Arreglo
void ordena_arreglo(Empleado * empleados) {

	// bubble sort

	bool swapped = false;
	do {
		swapped = false;
		for (int i = 0; i < MAX-1; i++)
		{
			if (empleados[i].oficina > empleados[i + 1].oficina){
				Empleado aux = empleados[i];
				empleados[i] = empleados[i+1];
				empleados[i+1] = aux;
				swapped = true;
			}
			else if (empleados[i].oficina == empleados[i + 1].oficina){
				if (empleados[i].horas > empleados[i + 1].horas) {
					Empleado aux = empleados[i];
					empleados[i] = empleados[i + 1];
					empleados[i + 1] = aux;
					swapped = true;
				}
			}
				
		}
	} while (swapped);
	imprimir_arreglo(empleados);
}


int main()
{
	Empleado * empleados = new Empleado[MAX];

	genera_arreglo(empleados);
	imprimir_arreglo(empleados);
	empleados_mas_trabajadores(empleados);
	promedio_de_tardanzas_por_oficina(empleados);
	empleados_puntuales(empleados);
	ordena_arreglo(empleados);

	_getch();
    return 0;
}
