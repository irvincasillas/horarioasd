#include <iostream>
using namespace std;

int main()
{
    
  int se,ss,h1,h2,m1,m2;
  
  cout<<"Hora de entrada \n";
  cout<<"Hora: ";
  cin>>h1;
  cout<<"Minuto: ";
  cin>>m1;
  cout<<"Segundo: ";
  cin>>se;
  
  cout<<"Hora de salida \n";
  cout<<"Hora: ";
  cin>>h2;
  cout<<"Minuto: ";
  cin>>m2;
  cout<<"Segundo: ";
  cin>>ss;
  
  ss-=se;
  if(ss<0)
    m2-=1;
    
  m2-=m1;
  if(m2<0)
    h2-=1;
    
  h2-=h1;
  
  cout<<"Trabajaste "<<h2<<":"<<m2<<":"<<ss;
  return 0;
}