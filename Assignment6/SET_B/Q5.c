#include<stdio.h>
int prime(int p)
{
    int i,flag=1;
    for(i=2;i<p;i++)
    {
        if(p % i == 0)
        {
            flag = 0;
            break;
        }
    }
    if(flag == 1)
    {
        printf("%d is a Prime No.",p);
    }
    else
        printf("%d is not a Prime No.",p);
}
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    
    prime(n);
}
