#include <iostream>
#include <conio.h>
using namespace std;
using namespace System;
void calcularPuntaje(char g, char n, char e) {
	int puntaje;
	int pGrado, pNivel, pEspecialidad;
	pGrado = (g == 'B') * 3 + (g == 'I') * 7 + (g == 'M') * 20;
	pNivel = (n == 'T') * 7 + (n == 'Q') * 10 + (n == 'R') * 2;
	pEspecialidad = (e == 'A') * 1 + (e == 'B') * 10 + (e == 'C') * 15 + (e == 'D') * 25;
	puntaje = pGrado + pNivel + pEspecialidad;
	cout << "Putaje obtenido: " << pGrado << " + " << pNivel << " + " << pEspecialidad << " = " << puntaje << endl;
	cout << "Ingresa (S: Si, N: No): " << char((puntaje < 24) * 78 + (puntaje >= 24) * 83);

}
int main() {
	char grado, nivel, esp;
	cout << "Grado (B: bachiller, I: ingeniero, M: magister): ";
	cin >> grado;
	cout << "Nivel (T: tercio, Q: quinto, R: regular): ";
	cin >> nivel;
	cout << "Especializacion (A: No tiene, B: Solo SAP, C: solo JAVA, D: Ambos): ";
	cin >> esp;

	calcularPuntaje(grado, nivel, esp);
	_getch();
	return 0;
}