#include <stdio.h>
#include <stdlib.h>
#define BASE 8 
// :.,$s/10/g -> Cambia los 10 por "BASE"
int main(){
    
    //asignamos el valor de la variable
    int entrada; 
    //Introduce un número entre el 0 y 999
    printf("Introduce un número entre el 0 y 999: ");
    //sacamos el último digito de ENTRADA
    scanf("%i", &entrada);
    //Imprimimos el último número
    printf("%i", entrada%BASE); 
    //Desplazazmos a la der
    entrada /= BASE;
    //Imprimo el último número
    printf("%i", entrada%BASE);

    //desplazar a la der
    entrada /= BASE;
    //Imprimo el último número
    printf("%i", entrada%BASE);

    printf("\n");

    
    return EXIT_SUCCESS;
}
