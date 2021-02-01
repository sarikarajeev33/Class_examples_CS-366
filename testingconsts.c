#include <stdio.h>

const static int FIVE=5;
#define SIX 6
enum {SEVEN = 7};
enum {EIGHT = 8};

int main(){

  int myarray[FIVE];
  int secondarray[SIX];
  int thirdarray[SEVEN];

  int var;

  enum TypeOne { RED, GREEN };
  enum TypeTwo { BLUE, YELLOW};

  enum TypeOne my_var;

  my_var = GREEN;

  printf("ALL the consts: %d %d %d\n",FIVE,SIX,EIGHT);

  switch(var){
    case SIX:
    case SEVEN:
  	;
  }
}

