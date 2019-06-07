
// ejercicio 2.cpp
//
//
//

#include <iostream>
#include <vector>

using namespace std;


struct Carro{
  int serie; //serie de 6 digitos
  char modelo;
  char color;
};

int main(){

  vector<Carro> carros;

  Carro carro = {123456, 'F', 'A'};
  carros.push_back(carro);

  return 0;
}
