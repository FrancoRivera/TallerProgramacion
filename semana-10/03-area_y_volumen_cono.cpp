#include <iostream>
#include <math.h>
using namespace std;


// hallamos pitagoras
float pitagoras(int a, int b){
  return sqrt(a*a + b*b);
}
//hallamos area y volumen
void Area_Volumen(int radio, int h){
  float PI = 3.14159265;
  float areaL = PI * radio * pitagoras(radio, h);
  float areaCirculo = PI * radio *radio;
  cout << "Area L " << areaL << endl;
  cout << "Area " <<  areaL + areaCirculo << endl;
  cout << "Volumen " << ((1.0/3.0)*areaCirculo*h) <<endl;
}

int main() {

  // estático pero remplazar por cin >>
  int radio = 1;
  int h = 1;
  Area_Volumen(radio, h);

  return 0;
}
