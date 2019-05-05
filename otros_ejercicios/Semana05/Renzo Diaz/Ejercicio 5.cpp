#include <iostream>
using namespace std;

int main()
{
	int *personas = new int;
	
	int *ninos = new int;
	int *jovenes = new int;
	int *adultos = new int;
	int *ancianos = new int;
	
	int *sample = new int;
	do{	
		system("cls");
		cout << "Ingrese el numero de personas: ";
		cin >> *personas;
	}while(!(*personas > 0));
	
	
	*ninos = 0;
	*jovenes = 0;
	*adultos = 0;
	*ancianos = 0;
	
	for (int i = 1; i <= *personas; i++)
	{
		do{	
			cout << "Edad de persona " << i << " :";
			cin >> *sample;
		}while(!(*sample >= 0));
		
		if (*sample <= 12)
			(*ninos)++;
		else if (*sample <= 29)
			(*jovenes)++;
		else if (*sample <= 59)
			(*adultos)++;
		else
			(*ancianos)++;
	}
	
	cout << "Porcentaje de niños: " << float(*ninos)/float(*personas) * 100 << endl;
	cout << "Porcentaje de jovenes: " << float(*jovenes)/float(*personas) * 100 << endl;
	cout << "Porcentaje de adultos: " << float(*adultos)/float(*personas) * 100 << endl;
	cout << "Porcentaje de ancianos: " << float(*ancianos)/float(*personas) * 100 << endl;	
	
	return 0;
}
