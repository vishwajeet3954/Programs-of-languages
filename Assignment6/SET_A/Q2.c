#include<stdio.h>
int eo(int n)
{
    int d;
    
    d=n/2;
    
    if(d*2==n)
    {
        printf("%d is Even.",n);
    }
    else
    {
        printf("%d is Odd.",n);
    }
}
int main()
{
    int num;
    printf("Enter number: ");
    scanf("%d",&num);
    eo(num);
}
