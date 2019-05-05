#include<iostream>

using namespace std;

int main() {

	int n;
	do{
		cout << "Ingrese un numero: ";
		cin >> n;
	} while (n < 4 || n >= 15);

	for (int i = 0; i < n;i++) {
		for (int j = 0; j < (40 - n);j++) {
			cout << " ";
		}
		for (int j = 1; j < n-i;j++) {
			cout << " ";
		}
		if (i % 2 == 0) {
			cout << char(196);
		}
		else {
			cout << char(179);
		}
		
		for (int j = 1; j <= ((2 * i) - 1);j++) {
			cout << char(250);
		}
		if (i!=0) {
			if (i % 2 == 0) {
				cout << char(196);
			}
			else {
				cout << char(179);
			}
		}
		
		cout << endl;
	}
	cout << endl;
	system("pause");
	return 0;
}