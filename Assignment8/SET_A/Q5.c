#include<stdio.h>
int main()
{
    int a=10;
    int *p;
    int **pp;
    
    p = &a;
    pp = &p;
    
    printf("Value of a = %d\n",a);
    printf("Value of *p = %d\n",*p);
    printf("Value of **pp = %d",**pp);
    
    return 0;
}
