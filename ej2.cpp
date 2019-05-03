// ConsoleApplication2.cpp : main project file.
#include "iostream"

using namespace std;

int main()
{
    int N,cont,espa;
	int filas;
	do{	cout<< "ingrese N: ";
		cin >> N;
	}while(N<=0);
	filas=2*N; espa=N;cont=1;
	for(int f=1;f<=filas;f++)
	{	for (int e=1;e<=espa;e++)
			cout << ' ';
		for (int c=1;c<=cont;c++)
			cout << '*';
		if (f==N) {espa=2*N; }
		if (f<N) {cont+=2;espa--;}
		if (f>N) {cont-=2; espa++;}
		cout << endl;
	}
		cin >> N;
    return 0;
}
