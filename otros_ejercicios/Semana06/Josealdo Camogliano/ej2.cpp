#include <iostream>
using namespace std;
bool capicua(int n) {
	if (n / 10 == n % 10)
		return true;
	if (n / 100 == n % 10)
		return true;
	return false;
}
int main() {
	bool c;
	int n;
	int contN = 0, contCap = 0;
	while (true) {
		cout << "Ingrese un numero: ";
		cin >> n;
		if (n <= 0) break;
		contN++;
		c = capicua(n);
		if (c == true) contCap++;
	}
	cout << "Numeros leidos: " << contN << endl;
	cout << "Cantidad de capicuas: " << contCap << endl;
	cout << endl;
	system("pause");
	return 0;
}