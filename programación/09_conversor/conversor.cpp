#include <stdio.h>
#include <stdlib.h>

int main(){
    
    int n, c, k;

    printf("Introduce tu número decimal: \n");
    scanf("%d", &n);
    printf("%d En número binario: \n",n);

    for (c= 15; c >= 0; c--) {

        k = n >> c; 

        if(k & 1)
            printf("1");
        else
            printf("0");

    }
    printf("\n");    
    return EXIT_SUCCESS;
}
