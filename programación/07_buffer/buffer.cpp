#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char **argv){

    char buffer[5];


    printf("say something:");
    gets(buffer, 4, stdin); 

    return EXIT_SUCCESS;
}
