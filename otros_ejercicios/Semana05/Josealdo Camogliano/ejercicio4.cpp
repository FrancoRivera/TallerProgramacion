#include <iostream>
#include <math.h>
using namespace std;

int main() {
	int n, cont, total;
	total = 0;
	cont = 1;
	cout << "Ingrese n: "; 
	cin >> n;
	do {
		total += pow(cont, 2);
		cont++;
	} while (cont <= n);
	cout << "Resultado de " << n << ": " << total;
	cout << endl;
	system("pause");
	return 0;
}