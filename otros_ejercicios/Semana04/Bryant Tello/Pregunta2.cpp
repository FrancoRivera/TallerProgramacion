#include <iostream>
using namespace std;

void Oscuro(float*S, int *P)
{
	if (*P < 1)
		cout << "Error";
	else if (*P == 1)
	{
		if (*S <= 500)
			cout << "Pre Pago";
		else
			cout << "Post Pago";
	}
	else if(*P>1&&*P<5)
	{
		if (*S <= 750)
			cout << "Pre Pago";
		else
			cout << "Post Pago";
	}
	else
	{
		if (*S <= 1000)
			cout << "Pre Pago";
		else
			cout << "Post Pago";
	}

}
int main()
{
	int*P;
	float *S;
	S = new float;
	P= new int;

	cout << "Ingrese Salario ";
	cin >> *S;
	cout << "Ingrese Personas a cargo";
	cin >> *P;

	Oscuro(S, P);
	cout << endl;
	system("pause");
}