#include <stdio.h>

int main() {
    int n = 10;
    int *ptr=&n;
    
    printf("Value of num        = %d\n", n);
    printf("Address of num      = %p\n", &n);

    printf("Value stored in ptr = %p\n", ptr);
    printf("Value using ptr    = %d\n", *ptr);

    return 0;
}

