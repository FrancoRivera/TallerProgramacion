#include <iostream>
using namespace std;
int main() {
	int n; 
	float b;
	int cont = 0;
	int contN = 2;
	int contD = 4;
	float s = 0;
	int giro = 1;
	do {
		cout << "Ingrese el valor de N: ";
		cin >> n;
		if (n > 0) break;
	} while (n < 0);
	do {
		cout << "Ingrese el valor de b: ";
		cin >> b;
		if (b > 0 && b <= 5) break;
	} while (b <= 0 || b > 5);
	while (cont < n) {
		s += (giro)*((contN*(b)) / contD);
		cont++;
		contN += 2;
		contD += 3;
		giro *= -1;
	}
	cout << "Resultado: " << s << endl;
	cout << endl;
	system("pause");
	return 0;
}