#include <stdio.h>
#include <stdlib.h>

enum {ADD,SUB,MULT,TOTAL};

int add(int a, int b){
  return a+b;
}

int sub(int a, int b){
  return a-b;
}

int mul(int a, int b){
  return a*b;
}

int main(int argc, char *argv[]){

  int one, two, option;

  int (*math[])(int, int) = {add, sub, mul};  


  if (argc < 2){
    printf("Usage: %s int int\n",argv[0]);
    return 0;
  }

  one = atoi(argv[1]);
  two = atoi(argv[2]);

  printf("You are going to do math on %d and %d.\n",one,two);
  printf("What math would you like to do?\n");
  printf("%d - add\n",ADD);
  printf("%d - subtract\n",SUB);
  printf("%d - multiply\n",MULT);
  printf("> ");
  fflush(stdout);

  scanf("%d",&option);

  if (option < TOTAL){
    printf("The result is %d. Bye!\n",math[option](one,two));
  } else {
    printf("Not a choice! Bye!\n");
  }
}
