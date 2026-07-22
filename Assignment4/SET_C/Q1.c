#include<stdio.h>
int main()
{
    int n,c,s=0,m=1,d;
    
    printf("Enter a number: ");
    scanf("%d",&n);
    
    c=n;
    while(n>0)
    {
        m=n%10;
        d=m*m*m;
        s=s+d;
        n=n/10;
    }
    if (c==s)
        printf("The number %d is Armstrong, because the addition is: %d",c,s);
    else
        printf("The number %d is not Armstrong, because the addition is: %d",c,s);
}