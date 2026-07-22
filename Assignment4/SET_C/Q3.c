#include<stdio.h>
int main()
{
    int n,c,a,r=0;
    printf("Enter number: ");
    scanf("%d",&n);
    
    c=n;
    while(n>0)
    {
        a=n%10;
        r=r*10+a;
        n=n/10;
    }
    if (c==r)
        printf("%d is a Palindrome number.",c);
    else
        printf("%d is not a Palindrome number.",c);
}