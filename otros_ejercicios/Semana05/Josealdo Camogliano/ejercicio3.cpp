#include<iostream>
using namespace std;
int main() {
	int* n, *d, *r, *c;
	n = new int;
	d = new int;
	r = new int;
	c = new int;

	cout << "Ingrese el numerador: ";
	cin >> *n;
	cout << "Ingrese el denominador: ";
	cin >> *d;
	*c = 0;
	*r = *n;
	if (*n > * d) {
		while (*r >= *d)
		{
			*r -= *d;
			(*c)++;
		}
	}
	cout << "El resto es : " << *r << endl;
	cout << "El cociente es : " << *c << endl;
	cout << endl;
	system("pause");
	return 0;
}
