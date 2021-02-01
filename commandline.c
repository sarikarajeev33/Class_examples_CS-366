#include <stdio.h>

int main(int argc,char *argv[]){

   printf("You ran this as %s\n",argv[0]);
   printf("First arg %s\n",argv[1]);
   for(int i = 1; i < argc; i++){
      printf("The arg is %s\n",argv[i]);
   }
   return 0;

}
