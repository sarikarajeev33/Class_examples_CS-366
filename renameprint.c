#include <stdio.h>

int main(void){
 int (*mine)(const char *,...);

  mine = printf;

  mine("Hello world\n");
}
