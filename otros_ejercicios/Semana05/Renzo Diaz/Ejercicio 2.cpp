#include <iostream>
using namespace std;

int main()
{
	char *categoria = new char();
	char *zona = new char();
	char *tipo = new char();
	int *precio = new int();
	int *area = new int();
	
	do{
		inicio:
		system("cls");
		cout << "Ingresa la categoría (C: comercial; R: residencial): ";
		cin >> *categoria;
		*categoria = toupper(*categoria);
		
		cout << "Ingresa la zona (A, B o C): ";
		cin >> *zona;
		*zona = toupper(*zona);
		
		if(*zona == 'C' && *categoria == 'C')
		{
			cout << "Error en zona comercial no existe zona C" << endl;
			system("pause");
			goto inicio;
		}
		
		cout << "Ingresa el tipo (T: terreno; C: casa; D: departamento): ";
		cin >> *tipo;
		*tipo = toupper(*tipo);
	
		cout << "Ingrese el area: ";
		cin >> *area;
		
	}while(!( (*categoria == 'C' || *categoria == 'R') && (*zona == 'A' || *zona == 'B' || *zona == 'C') && (*tipo == 'T' || *tipo == 'C' || *tipo == 'D')  ));
	
	if(*categoria == 'C')
	{
		switch(*zona)
		{
			case 'A':
				switch(*tipo)
				{
					case 'T': *precio = 2200; break;
					case 'C': *precio = 2500; break;
					case 'D': *precio = 2100; break;
				}		
				break;
			case 'B':
				switch(*tipo)
				{
					case 'T': *precio = 1300; break;
					case 'C': *precio = 1500; break;
					case 'D': *precio = 1200; break;
				}		
				break;								
		}
	}
	else
	{
		switch(*zona)
		{
			case 'A':
				switch(*tipo)
				{
					case 'T': *precio = 2100; break;
					case 'C': *precio = 2500; break;
					case 'D': *precio = 2100; break;
				}		
				break;
			case 'B':
				switch(*tipo)
				{
					case 'T': *precio = 1500; break;
					case 'C': *precio = 1600; break;
					case 'D': *precio = 1300; break;
				}		
				break;
			case 'C':
				switch(*tipo)
				{
					case 'T': *precio = 1100; break;
					case 'C': *precio = 1300; break;
					case 'D': *precio = 1000; break;
				}
				break;								
		}
	}
	
	
	cout << "El monto a cancelar es: " << (*area) * (*precio); 
	
	
	return 0;
}
