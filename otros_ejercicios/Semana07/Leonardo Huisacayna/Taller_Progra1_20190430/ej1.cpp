#include<iostream>

using namespace std;

int factorial(int num) {
	int fact = 1;
	for (int i = 1; i <= num; i++) {
		fact = fact * i;
	}
	return fact;
}

int main() {

	float euler, numerador, denominador;
	int n;
	euler = 0.0;
	do {
		cout << "Ingrese el valor de N: ";
		cin >> n;
	} while (n<=0||n>=120);
	
	for (int i = 1; i <= n;i++) {
		numerador = pow(i,2);
		denominador = 2 * (factorial(i));
		euler = euler + numerador / denominador;
	}
	cout << "El valor del numero e es: " << euler<<endl;
	system("pause");
}