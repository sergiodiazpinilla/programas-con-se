#include <stdio.h>
#include <stdlib.h>
#define BASE 10
int main(){
    int origen, destino = 0;

    printf("Numero: ");
    scanf("%i", &origen);

    do{
        destino *= BASE;
        destino += origen % BASE; 
        origen /= BASE;
    }while (origen != 0);

    printf("%i\n", destino);
    
    
    return EXIT_SUCCESS;
}
