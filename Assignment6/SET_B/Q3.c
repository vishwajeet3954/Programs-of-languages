#include<stdio.h>
int square(int s)
{
    return s*s;
}
int main()
{
    int n,a;
    printf("Enter a Number: ");
    scanf("%d",&n);
    a=square(n);
    printf("Square of %d is %d",n,a);
}
