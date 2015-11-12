#include <stdio.h>
#include <stdlib.h>

int main(){
    char letra = 0141; // 97, 1-64 4-8 -1 , 0x61

    printf("hol%i.\n", letra);
    printf("hol%c.\n", letra);
   
    printf("%d.\n", 27);
    printf("%x.\n", 27);
    printf("%X.\n", 27);
   
    printf("hola\tcaracola\n");
    printf("tu madre\011 \x9 es pura\b\bt\a\a");

    printf("\n\n");
    printf("%.2lf\n", 0.5);

    printf("%i\t%i\t%i\n")
    return EXIT_SUCCESS;
}
