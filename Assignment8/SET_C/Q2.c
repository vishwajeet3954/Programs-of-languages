#include <stdio.h>

void greet() {
    printf("Hello! This function is called using a function pointer.\n");
}

int main() {

    void (*funcPtr)();

    funcPtr = greet;

    funcPtr();

    return 0;
}

