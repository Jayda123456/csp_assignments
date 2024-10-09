#include <stdio.h>

int main(void) {
    char animal[20];
    printf("Name an animal: ");
    scanf("%s", animal);
    
    char place[20];
    printf("Name a place: ");
    scanf("%s", place);
    
    char verb[20];
    printf("Name a verb: ");
    scanf("%s", verb);
    
    printf("You said: %s in %s while %s.\n", animal, place, verb);
    
    return 0;
}