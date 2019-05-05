#include<iostream>

using namespace std;

int main() {
	int n;
	int i = 1;
	int suma = 0;
	do{
		cout << "Ingrese n: ";
		cin >> n;
	} while (n<0);
	
	while (i<=n) {
		suma += (i*i);
		i++;
	}
	cout << "Suma: " << suma << endl;
	system("pause");
	return 0;
}