#include <stdio.h>
#include <stdlib.h>
#include "linear_f.h"
int main() 
{
  void blank();
  int t;
puts("Menu |");
blank();
puts("1. 일차함수");
puts("0. 끝내기")
blank();
puts("고르세요.");
printf(" : ");
scanf("%d", &t);
switch(t) {
  case 1:
  linear_menu();
  break;
  case 0:
  system("exit");
  break;
}
return 0; 
}
void blank() {
  printf("\n");
}
