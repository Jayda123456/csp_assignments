#include <stdio.h>

int main(void){
   char income[9];
   char utilities[9];
   char groceries[9];
   char car[9];
   printf("this is a budget calulator.\n how much do you make a month?\n");
    scanf("%s", income)
    printf("how much do your utilities cost\n");
    scanf("%s", utilities)
    printf("you make %f\n", income);
    float spend [] = (float) income - (float) utilities;
    printf("%", spend);
    return 0;
}