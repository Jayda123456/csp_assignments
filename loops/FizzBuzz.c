#include <stdio.h>
char fizz[] = "fizz";
char buzz[] = "buzz";
char fizzbuzz[] = "fizzbuzz";
// first block of code
int main() {

    int i = 0;
// for loop
    for(i=1;i<=50;i++){
// if statments
        if(i%3==0 && i%5==0){
            printf("%s\n", fizzbuzz);
        }
        else if(i%3==0){
            printf("%s\n", fizz);
        }

        else if(i%5==0){
            printf("%s\n", buzz);
        }
        else{
            printf("%d\n", i);
        }
    }
}
