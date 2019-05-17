
#include<iostream>


void fib(int n1, int n2){
  if (n2 == 1) return n1 + n2;

  fib(n2, n1-1);
}
int main(){

  int n = 10;

  
}
