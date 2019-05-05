#include <iostream>
using namespace std;

int main() {
	int n;
	int cont = 0;
	int d = 2;
	int contD = 2;
	float a, suma = 0;
	do {
		cout << "Ingrese N: ";
		cin >> n;
		if (n > 0) break;
	} while (n < 0);
	do {
		cout << "Ingrese a: ";
		cin >> a;
		if (n >= 1 && n <= 4) break;
	} while (a <= 1 || a >= 4);
	
	while (cont < n) {
		suma += (a / d);
		contD += 2;
		d += contD;
		cont++;
	}
	cout << "La suma es: " << suma << endl;
	cout << endl;
	system("pause");
	return 0;
}