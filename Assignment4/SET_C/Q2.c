#include<stdio.h>
int main()
{
    int n,m;
    printf("Enter number: ");
    scanf("%d",&n);
    
    while(n>0)
    {
        m=n%10;
        printf("%d",m);
        n=n/10;
    }
}