#include <iostream>

using namespace std;

int main() {
	int n;
	float b;
	int signo;
	float numerador, denominador;
	float suma = 0.0;
	do {
		cout << "Ingrese N: ";
		cin >> n;
	} while (n <= 0);

	do {
		cout << "Ingrese b: ";
		cin >> b;
	} while (b < 1 || b>5);

	for (int i = 0; i < n;i++) {
		numerador = 2 * b * (i + 1);
		denominador = 4 + (3 * (i));
		signo = pow(-1,i);
		suma = suma + (signo * (numerador / denominador));
	}

	cout << "Resultado: " << suma << endl;

	system("pause");
	return 0;
}