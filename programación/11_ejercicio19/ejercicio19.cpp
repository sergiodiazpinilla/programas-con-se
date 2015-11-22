#include <stdio.h>
#include <stdlib.h>
#define BASE 10
int main(){
    int numero;//865
    int numero2 = 0;
  //Preguntar un número al usuario
  printf("Dime un numero del 0 al 999: ");
  //Ponlo en la  varible origen
  scanf("%i", &numero);
  //Hacer %10 de la variable origen-guardarlo en destino
  numero2 = numero%BASE;
  //Dividir la variable origen entre 10
  numero /= BASE;
  //Multiplico la variable destino por 10
  numero2 *= BASE; 
  //Hacer %10 de origen y se lo suma a destino
  numero2 += numero%BASE ;
  //dividir la variable de origen entre 10
  numero /= BASE;
  //Multiplico la variable destino por 10
  numero2 *= BASE; 
  //Hacer %10 de origen y se lo sumas a destino
  numero2 += numero%BASE;  

    printf("%i\n", numero2);
    return EXIT_SUCCESS;
}
