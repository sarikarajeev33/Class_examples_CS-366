#include <stdio.h>
#include <string.h>

int main(){

  char first[4]="123";
  char my_array[5];
  char abc[4];

  strcpy(my_array,"Hi!!");
  strcpy(abc,"abc");


  printf("%s\n",first);
  printf("%s\n",my_array);
  printf("%s\n",&my_array[0]);
  printf("%s\n",&my_array[-16]);
  printf("%d\n",my_array-first);
 
  for(int i = -40 ; i < 40; i++){
     if (my_array[i] > 20 && my_array[i] < 128){
         printf("%d %c\n",i, my_array[i]);
     }
  }

  return 0;

}
