#include<iostream>
using namespace std;
int main()
{
  int distancia;
  int velocidad;
  int tiempo;
  cout<<"Introduzca un valor para la distancia en metros_"<<endl;
  cin>>distancia;
  cout<<"Introduzca el tiempo en segundos_"<<endl;
  cin>>tiempo;
  velocidad=distancia/tiempo;
  cout<<"La velocidad es_"<<velocidad<<"m/s"<<endl;
  return 0;
}
