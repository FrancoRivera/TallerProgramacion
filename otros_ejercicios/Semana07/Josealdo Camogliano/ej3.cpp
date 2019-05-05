#include <iostream>
using namespace std;
/*
179 │
196 ─
250 ·
*/
int main() {
	int n;
	do {
		cout << "Ingrese un numero: ";
		cin >> n;
		if (n >= 4 && n < 15)break;
	} while (n < 4 || n >= 15);

	int cont = 1;
	for (int i = 1; i <= n; i++) {
		for (int j = i; j <= n; j++) {
			if (j == n) {
				if ((i % 2) == 0) cout << "|";
				else cout << "-";
			}
			else
				cout << " "; 
		}
		if (i > 1) {
			for (int k = 1; k <= cont; k++){
				if (i > 1) {
					cout << "*";
				}
			}
			cont += 2;
		}
		if (i > 1) {
			if ((i % 2) == 0) cout << "|";
			else cout << "-";
		}
		cout << endl;
	}
	cout << endl;
	system("pause");
	return 0;
}
