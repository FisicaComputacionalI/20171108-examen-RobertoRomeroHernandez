//Examen: en este programa definimos una variebla llamada x con el valor de 1 al entrar al diagrama l pregutarán si es menor o igual a 5 y como no lo es pasarà al ciclo, se le preguntarà si es divisible entre 3 exactamente y como no lo es se mostrarà l número en la pantalla, luego se le sumarán 2 y volvera a entrar, como ahora vale 3 sigue siendo menor a 5 vuelve a entrar pero como ahora si es divisibl exactamente entre 3  directamente se le sumarán 2 y ahora es un 5 como 5 es igual a 5 volverá a entrar al ciclo por última vez y como no es divisible exactamente por 3 se imprimira el nimero 5 y se le sumaran 2 como ahora es 7 sale del ciclo y acaba en el programa y en la pantalla solo aparecerán los números 1 y 5 porque son los únicos 2 que tienen la orden de imprimirse
//Roberto Romero Hernández
//8 de noviembre  de 2017
#include <iostream>
using namespace std;
int main()
{
  
  int x=1;
  while(x<=5){
    if (x%3==0){
      x=x+2;   
    }
    else{
      cout << x << endl;    
      x=x+2;    
}
  }
  return 0;
}
