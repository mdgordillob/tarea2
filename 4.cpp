#include <iostream>
#include <fstream>
#include <cstdio>
#include <iomanip>
#include <cmath>
const double N=5000;
double  expansion(double n, int m){
  int i=1;
  double t=1;
  while(i<=m){
  t=t*n;
  i++;
  }
  return t;
}
double  suma1(double n, int  m){
  double pot=std::pow(n,m);
  double suma=0;
  suma=(1.0/pot);
  return suma;
  
}
double  suma2(double n)

{

 
}

int main(){
  std::ofstream myfile;
  myfile.open ("datos.txt");
  myfile.close();
  std::cout.precision(7);
  std::cout.setf(std::ios::scientific);
  int n=1;
  double f=0,r=0,h=0,k=0,i=1,j=N;
  while(i<N){
  f=suma1(i,2);
  h=((-(h+f)+M_PI)/(M_PI));
  std::cout<<i<<"    ";
  std::cout<<h<<"     ";
  k=suma1(N-i,2);
  r=((-(r+k)+M_PI)/(M_PI));
  std::cout<<r<<std::endl;
  i++;
  }
 
    return 0;
}

//export https_proxy="https://mdgordillob:exq7MmTKsv@proxyapp.unal.edu.co:8080/"
