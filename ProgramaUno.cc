//Examen: este programa si se da un número mayor a 12 dará el mismo número y si es menor se le suman 2 y dirá si es primo o no.
//Edad 22 años 
//Fecha de nacimiento: 8 de mayo de 1995  
//Resultado del programa 22
//Roberto Romero Hernández
//Fecha de creación: 8 de noviembre de 2017
#include <iostream>
using namespace std;

int esPrimo(int X){
  int flag=0; 
 
  for(int i=2; i<= (X/2) ; i++){
    if(X%i==0){
      flag=1;
    }
  }   
  return flag;
}

int main (){
  int S=12;
  int p=0;
  int flag=0;

  cout << "Dame un número entero" << endl;
  cin >> p;

  while (S!=0){ 
    //    cout << "S es: " << S << " ,p es: " << p << endl;
    while(p<S){
      //  cout << "ciclo p<S, S " << S << ",p " << p << endl;

      while(esPrimo(p)==1){
	//	cout << "ciclo esPrimo, S " << S << ",p " << p << endl;
	cout << p << " no es primo  " << endl;
	if((p%2)==0)
	  p=p+1;
	p=p+2;
	//	cout << "final ciclo esPrimo, S " << S << ",p " << p << endl;
      }  
    
      S=S-p;
      p=p+2;
      //  cout << "final ciclo p<S, S " << S << ",p " << p << endl;
    }
    S=S-1;
    //  cout << "final ciclo S!=0, S " << S << ",p " << p << endl;
  }
  
  cout << " el valor de P es " << p << endl;
  return 0;
}
