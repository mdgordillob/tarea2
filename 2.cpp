#include <iostream>
#include <cstdio>
#include <iomanip>
#include <cmath>
const double N=5;
double  expansion(double n, int m){
  int i=1;
  double t=1;
  while(i<=m){
  t=t*n;
  i++;
  }
  return t;
}
double  potencia1(double n, int  m){
  double pot=std::pow(1-n,m);
  return pot;
  
}
double  potencia2(double n)

{
  double pot=0,x=0;
  x=1-n;
  pot=1-8*expansion(x,1) + 28*expansion(x,2) - 56*expansion(x,3) + 70*expansion(x,4) - 56*expansion(x,5)+ 28*expansion(x,6) - 8*expansion(x,7)+expansion(x,8); 
 
}
double  potencia3(double n){
  double pot=0;
  pot=1-8*pow(1-n,1) + 28*pow(1-n,2) - 56*pow(1-n,3) + 70*(1-n,4)-56*(1-n,5)+28*pow(1-n,6)-8*(1-n,7)+pow(1-n,8);
  return pot;
}
int main(){
  std::cout.precision(5);
  std::cout.setf(std::ios::scientific);
  double f=0,por=0,h=0,k=0,i=0.992;
     std:: cout<<f;
  while(i<1.008){
    f=potencia1(i,8);
   std::cout<<i<<"   ";
   std::cout<<f<<"   ";
  h=potencia2(i);
  std::cout<<h<<"   ";
  k=potencia3(i);
  std::cout<<k<<std::endl;
   i=i+0.0001;
   }
  
    return 0;
}


