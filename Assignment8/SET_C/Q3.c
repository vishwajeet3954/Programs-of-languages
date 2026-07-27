#include <stdio.h>

int main() {
    int num = 10;

    int *ptr;
    int **pptr;

    ptr = &num;
    pptr = &ptr;

    printf("Value of num        = %d\n", num);
    printf("Value using ptr    = %d\n", *ptr);
    printf("Value using pptr   = %d\n", **pptr);

    printf("\nAddress of num     = %p\n", &num);
    printf("Value stored in ptr= %p\n", ptr);
    printf("Value stored in pptr= %p\n", pptr);

    return 0;
}

