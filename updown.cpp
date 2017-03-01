#include <iostream>
#include <cstdio>
#include <iomanip>
#include <cmath>
#include <fstream>
const double N=10000;
double  suma(double n){
  double suma=0;
  suma=1/n;
  return suma;
}
int main(){
  std::ofstream myfile;
  myfile.open ("datosupdown.txt");
  std::cout.precision(20);
  std::cout.setf(std::ios::scientific);
  int n=1;
  double suma1=0,suma2=0;
  while(n<=N){
  myfile<<n<<"   ";
  suma1=suma1+suma(n);
  suma2=suma2+suma(N-n+1);
  std::cout<<suma1<<"   ";
  std::cout<<suma2<<std::endl;
  myfile<<((suma1-suma2))/(suma1+suma2)<<std::endl;
  n++;
  }
  myfile.close();
  return 0;
}


