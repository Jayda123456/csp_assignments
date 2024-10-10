#include <stdio.h>

void sayHello(char name[]) {
    printf("Hello %s\n", name);
}

int main(void) {
    sayHello("Wyatt");
    sayHello("Brooklyn");
    sayHello("Reese");
    sayHello("Jayda");
    sayHello("Jeremy");

    return 0;
}