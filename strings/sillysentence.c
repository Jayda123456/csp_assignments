#include <stdio.h>

int main(void) {
    char animal[20];
    printf("Name an animal: ");
    scanf("%s", animal);
    printf("%s", animal);
    char place[20];
    printf("name a place: ");
    scanf("%s", place);
    printf("%s\n", place);
    char verb[20];
    printf("name a verb: ");
    scanf("%s", verb);
    printf("%s\n", verb);
    printf("%s\n", animal, place, verb);
    return 0 ;
}
