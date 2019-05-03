// Serie_A.cpp : main project file.

#include "iostream"

using namespace std;

float potencia(float base,int expo)
{   float multi=1;
    for(int i=1;i<=expo;i++)
		multi=multi*base;
	return multi;
}
int main()
{
	float ter,suma,a,b;
	int signo,algo1,algo2,algo3,P;
	do{	cout << "Ingrese P:"; 
		cin >> P;
	}while(P<=0);
	cout << "Ingrese a:"; cin >> a;
	cout << "Ingrese b:"; cin >> b;
	suma=0;algo1=3;algo2=2;algo3=1;
	for(int i=1;i<=P;i++)
	{   ter=signo*algo1*(a+potencia(b,algo2))/algo3;
		suma=suma+ter;
		signo*=-1;
		algo1+=2;
		algo2++;
		algo3++;
	}
		cin >> P;
    return 0;
}
