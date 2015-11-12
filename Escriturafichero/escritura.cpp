#include <stdio.h>
#include <stdlib.h>

int main(){
        FILE *pf;

            
            pf = fopen ("estoesunaprueba.txt", "w");

            
            fprintf (pf, "Esto sale en pantalla");

            fclose(pf);

            return EXIT_SUCCESS;


         }
