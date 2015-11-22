
#include <stdio.h>
#include <stdlib.h>
#define BASE 100
int main(){

        int numero = 0;
            char nombre [20];

        printf("Cual es tu nombre? : ");
        scanf(" %s", &nombre);


        do{ 
            printf("Hola %s", &nombre);
            numero++; 
            }while (numero<BASE );
        printf("\n \t");
     return EXIT_SUCCESS;
  }


