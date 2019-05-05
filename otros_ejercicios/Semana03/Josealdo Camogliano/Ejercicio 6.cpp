#include <iostream>
using namespace std;

void Ingreso(char *grado, char *nivel, char *espec)
{
	cout << "Grado (B: bachiller; I: ingeniero; M: magíster): ";
	cin >> *grado;
	cout << "Nivel (T: tercio; Q: quinto; R: regular): ";
	cin >> *nivel;
	cout << "Especialización (A: no tiene; B: solo SAP; C: solo JAVA; D: SAP y JAVA): ";
	cin >> *espec;
	
	*grado = toupper(*grado);
	*nivel = toupper(*nivel);
	*espec = toupper(*espec);	
}
void Proceso(char *grado, char *nivel, char *espec, int *puntaje, char *ingresa)
{
	*puntaje = 	(*grado == 'M')*(20) + (*grado == 'I')*(7) + (*grado == 'B')*(3) +
				(*nivel == 'Q')*(10) + (*nivel == 'T')*(7) + (*nivel == 'R')*(2) + 
				(*espec == 'A')*(1)  + (*espec == 'B')*(10)+ (*espec == 'C')*(15)+ (*espec == 'D')*(25);
	
	*ingresa = (*puntaje >= 24)*(83) + (*puntaje < 24)*(78);
}
void Salida(int *puntaje, char *ingresa)
{
	cout << "Puntaje Obtenido: " << *puntaje << endl;
	cout << "Ingresa a (S=Sí, N=No): " << *ingresa << endl;
}

int main()
{
	char *grado = new char;
	char *nivel = new char;
	char *espec = new char;
	int *puntaje = new int;
	char *ingresa = new char;
	
	Ingreso(grado, nivel, espec);
	Proceso(grado, nivel, espec, puntaje, ingresa);
	Salida(puntaje, ingresa);
	
	system("pause");
	return 0;
}
