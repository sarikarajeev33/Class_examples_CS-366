#include <stdio.h>
#include <stdlib.h>
#include "myfunction.h"
#include "myfunction.h"

int main(int argc, char *argv[]){

   int mynumber=atof(argv[1]);
   int myresult;

   myresult = thisisit(mynumber);

   printf("The result is %d\n",myresult);

   return 0;

}
