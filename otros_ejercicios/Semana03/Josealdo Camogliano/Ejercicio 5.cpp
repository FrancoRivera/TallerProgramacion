#include <iostream>
using namespace std;

void Ingreso(int *apellido, int *edad, int *peso)
{
	char *letra = new char;
	
	cout << "Ingrese la primera letra de su apellido: ";
	cin >> *letra;
	cout << "Ingrese edad: ";
	cin >> *edad;
	cout << "Ingrese peso: ";
	cin >> *peso;
   
   *apellido = (int)(*letra);
}

int Ternario(int *valor)
{
	return *valor / 3 / 3 / 3 / 3 * 10000 +
   			*valor / 3 / 3 / 3 % 3 * 1000 +
   			*valor / 3 / 3 % 3 * 100 +
      		*valor / 3 % 3 * 10 +
   			*valor % 3;
}

void Salida(int *apellido, int *edad, int *peso)
{

	cout << "Primera letra del apellido: " << Ternario(apellido) << endl;
	cout << "Edad:" << Ternario(edad) << endl;
	cout << "Peso: " << Ternario(peso) << endl;
}

int main() 
{
   
   int *apellido = new int;
   int *edad = new int;
   int *peso = new int;
   
   Ingreso(apellido, edad, peso);
   Salida(apellido, edad, peso);
   
   system("pause");
   return 0;
}
