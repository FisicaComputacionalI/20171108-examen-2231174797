#include<iostream>
using namespace std;
int main()
{
  //al declarar tus variables como enteros la división es cero cuando es real. Tu programa correría bien sí declaras tus variables como float. 
  //int distancia;
  //int velocidad;
  //int tiempo;
  float distancia;                
  float velocidad;
  float tiempo; 
  cout<<"Introduzca un valor para la distancia en metros_"<<endl;
  cin>>distancia;
  cout<<"Introduzca el tiempo en segundos_"<<endl;
  cin>>tiempo;
  velocidad=distancia/tiempo;
  cout<<"La velocidad es_"<<velocidad<<"m/s"<<endl;
  return 0;
}
