#include <iostream>
using namespace std;
int main() {
	int n, edad;
	float nino, joven, adulto, adultoM, personas;
	personas = 0;
	nino = joven = adulto = adultoM = 0;
	cout << "Ingrese el numero de personas: ";
	cin >> n;
	cout << endl;
	do {
		cout << "Edad de la persona" << personas + 1 << ": ";
		cin >> edad;
		if (edad >= 0 && edad <= 12) nino += 1;
		if (edad >= 13 && edad <= 29) joven += 1;
		if (edad >= 30 && edad <= 59) adulto += 1;
		if (edad >= 60) adultoM += 1;
		personas++;
	} while (personas < n);
	cout << endl;
	float pNino, pjoven, pAdulto, pAdultoM;

	pNino = (nino / personas) * 100;
	pjoven = (joven / personas) * 100;
	pAdulto = (adulto / personas) * 100;
	pAdultoM = (adultoM / personas) * 100;

	cout << "Porcentaje de ninos: " << pNino << endl;
	cout << "Porcentaje de jovenes: " << pjoven << endl;
	cout << "Porcentaje de adultos: " << pAdulto << endl;
	cout << "Porcentaje de adultos mayores: " << pAdultoM << endl;
	cout << endl;
	system("pause");
	return 0;
}