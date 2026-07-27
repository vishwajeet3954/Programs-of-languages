#include<stdio.h>
int main()
{
    int a[4] = {12,14,15,18};
    int *p = a;
    
    printf("Initial pointer address: %p",p);
    printf("\nValue at pointer: %d",*p);
    
    p++;
    printf("\nAfter incrementing pointer:\n");
    printf("Pointer address: %p\nValue at pointer: %d\n",p,*p);
    
    return 0;
}
