#include <stdio.h>

int age = 25;

int main (void){
    if (age >= 20){
         printf("you are old enough to vote\n");

    }else if (age >= 15){
           printf("your old enough get your permit\n");

    }else if (age >= 15){
        printf("your are old enought to drive\n");

    }else if (age >= 5){
        printf("you are old enough to go to school\n");
        
    }else{
        printf(" sorry, you are not old enough to go to school\n");
    }
     
   return 0;
}