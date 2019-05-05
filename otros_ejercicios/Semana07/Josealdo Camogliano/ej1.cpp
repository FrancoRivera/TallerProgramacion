#include <iostream>
using namespace std;
double factorial(int n) {
	double factorial = 1;
	for (int i = 1; i <= n; i++) {
		factorial *= i;
	}
	return factorial;
}
int main() {
	int n;
	int cont = 0;
	double contN = 1;
	double contSA = 1;
	int contFactorial = 1;
	double euler = 0;
	do {
		cout << "Ingrese el valor de N: ";
		cin >> n;
		if (n > 0 && n <= 120) break;
	} while (n < 0 || n >120);
	while (cont < n) {
		euler += (contN) / (2 * factorial(contFactorial));
		contSA += 2;
		contN += contSA;
		contFactorial++;
		cont++;
	}
	cout << "El valor del numero es: " << euler << endl;
	cout << endl;
	system("pause");
	return 0;
}