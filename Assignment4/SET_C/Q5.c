#include<stdio.h>
int main()
{
    int n, i, flag;
    
    printf("Enter number: ");
    scanf("%d",&n);
    
    flag=0;
    for(i = 2; i < n; i++)
    {
        if(n % i==0)
        {
            flag = 1;
            break;
        }
    }
    if(flag==0)
        printf("%d is a prime number.",n);
    else
        printf("%d is not a prime number.",n);
}