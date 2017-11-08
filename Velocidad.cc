//Examen: Programa que calcula velociades
//Roberto Romero Hernández
//8 de noviembre de 2017
#include <iostream>
using namespace std;
int main()
{

  float d=0;
  float t=0;
  float v=0.0;
  cout << "Dame la distancia recorrida " << endl;
  cin >> d;
  cout << "Dame el tiempo que tardo en recorrerlo " << endl;
  cin >> t;
  v=d/t;
  cout << "La velocidad que tuvo " << v << endl;
  return 0;
}
