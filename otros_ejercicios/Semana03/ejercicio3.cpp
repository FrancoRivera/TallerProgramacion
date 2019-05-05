#include <iostream>
#include <conio.h>
using namespace std;
using namespace System;
float calcularMonto(int a, int v) {
	return (v < 70)*2.5*a*a*5*5 + (v >= 70 && v <= 150)*5*a*a*5 + (v > 150)*10*a*a*5;
}
int main() {
	
	int a, v;
	float monto;	
	cout << "Ingrese el tamanio de la arista (m): ";
	cin >> a;
	v = a*a*a;
	cout << "volumen: " << v << endl;
	monto = calcularMonto(a, v);
	cout << "Monto a pagar: " << monto << endl;
	_getch();
	return 0;
}