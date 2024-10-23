#include <stdio.h>
#include <string.h>
int i;
int usr;
char one[50];
char two[50];
char three[49];
int main(){
        printf("give me a number");
        scanf("%d", &usr);
        printf("give me short word");
        scanf("%d", &one);
        printf("give me short word");
        scanf("%s", &two);
        strcat(three, one);
        strcat(three, two);
     //loopthat counts to 50
    for(i=1;i<=usr;i++){

        //replace numbers divisile by 3 and 5 with "fizzBuss"
        if(i%3==0 && i%5==0){
            strcat(one,two);
            print("%s\n", three);
         
        //replace number divisible by 3 with "fizz"
            }else if (i%5==0){
                printf("%s\n", one)
       

        //replace numebrs divisible by 5 with "buss"
            }else if (i%5==0){
                
            }
      //print the number
        printf("%d\n", i);
        }
    }
}