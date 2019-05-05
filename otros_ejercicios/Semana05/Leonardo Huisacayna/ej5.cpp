#include<iostream>

using namespace std;

int main() {
	int n;
	int totalNinos = 0, totalJoven = 0, totalAdulto = 0, totalMayores = 0;
	int i = 0;
	int edad;
	do {
		cout << "Ingrese el numero de personas: ";
		cin >> n;
	} while (n<0 &&n>50);
	
	while (i<n) {
		do {
			cout << "Edad de la persona " << (i + 1) << " : ";
			cin >> edad;
		} while (edad < 0 || edad>120);
		
		if (edad<=12) {
			totalNinos++;
		}
		else if(edad<=29){
			totalJoven++;
		}
		else if (edad<=59) {
			totalAdulto++;
		}
		else {
			totalMayores++;
		}
		i++;
	}

	cout << "Porcentaje de ninos: " << (((double)totalNinos / (double)n) * 100) << endl;
	cout << "Porcentaje de jovenes: " << (((double)totalJoven / (double)n) * 100) << endl;
	cout << "Porcentaje de adultos: " << (((double)totalAdulto / (double)n) * 100) << endl;
	cout << "Porcentaje de adultos mayores: " << (((double)totalMayores / (double)n) * 100) << endl;
	system("pause");
	return 0;
}