#include <iostream>
#include <cstdio>
#include <iomanip>
#include <cmath>
const double N=200;
double  raiz1(double m,double n,double p){
  double raiz=0,dis=0;
  dis=pow(n,2)-4*m*p;
  raiz=(-n+pow(dis,0.5))/2*m;
  std::cout<<raiz<<"   ";
  return raiz;
}
double  raiz2(double m,double n,double p){
   double raiz=0,dis=0;
  dis=pow(n,2)-4*m*p;
  raiz=(-n-pow(dis,0.5))/2*m;
  std::cout<<raiz<<"   ";   
  return raiz;
}
double  raiz3(double m, double n, double p)
{
 double raiz=0,dis=0;
  dis=pow(n,2)-4*m*p;
  raiz=(-2*p)/(n+pow(dis,0.5));
  std::cout<<raiz<<"   ";
  return raiz; 
}

    double  raiz4(double m, double n, double p){
 double raiz=0,dis=0;
  dis=pow(n,2)-4*m*p;
  raiz=(-2*p)/(n-pow(dis,0.5));
  std::cout<<raiz<<std::endl;
  return raiz; 
  
}
int main(){
  std::cout.precision(11);
  std::cout.setf(std::ios::scientific);
  int n=0;
  while(n<N){
  double a=1,b=1,c=pow(10,-n);
  raiz1(a,b,c);
  raiz2(a,b,c);
  raiz3(a,b,c);
  raiz4(a,b,c);
  n++;
  }
    return 0;
}


