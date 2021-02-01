#include <stdio.h>
#include <unistd.h>

int main(){

    printf("I'm printing this line ");
    printf("And this one ");
    fprintf(stderr,"And this third ");
    sleep(3);
    printf("\n");

    printf("AGAIN!\n");

    printf("I'm printing this line ");
    printf("And this one ");
    fflush(stdout); //this line is new!
    fprintf(stderr,"And this third ");
    sleep(3);
    printf("\n");


    return 0;

}
