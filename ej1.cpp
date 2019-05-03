
// incuir iostream
#include <iostream>

using namespace std;

int main()
{
  int N,cont,espa;
  int filas;
  do{
    cout<< "ingrese N: ";
    cin >> N;
  } while(N<=0  && N < 6);

  //cantidad de filas = 2*n -1;
  filas = cont = 2 * N - 1;
  // resetar de cantidad de espacio
  espa=0;

  for(int f = 1; f <= filas; f++)
    {	for (int e = 1; e<=espa; e++)
      cout << ' ';
      for (int c = 1; c <= cont; c++)
	cout << c;
      if (f < N ){
	cont -=2;
	espa++;
      }
      else{
	cont += 2;
	espa--;
      }
      cout << endl;
    }
  cin >> N;
  return 0;
}
