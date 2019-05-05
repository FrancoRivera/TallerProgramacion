#include <iostream>
#include<math.h>
using namespace std;
int main() {
	int n, x, a;
	int cont = 0, contNumerador= 2, contDenominador = 1;
	int cambio = -1;
	float sumatoria = 0;
	do {
		cout << "Ingrese n: ";
		cin >> n;
		if (n > 0 && n < 20) break;
	} while (n < 0 || n > 20);
	cout << "Ingrese x: ";
	cin >> x;
	do {
		cout << "Ingrese a: ";
		cin >> a;
		if (a > 0) break;
	} while (a <= 0);
	while (cont < n) {
		sumatoria += cambio*(contNumerador*(pow(x, contNumerador - 1))) / (contDenominador*a);
		contNumerador++;
		contDenominador += 2;
		cambio *= -1;
		cont++;
	}
	cout << "El resultado de la serie sera: " << sumatoria << endl;
	cout << endl;
	system("pause");
	return 0;
}