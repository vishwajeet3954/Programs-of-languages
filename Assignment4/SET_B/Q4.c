#include <stdio.h>

int main() 
{
    int n;
    
    printf("Enter number: ");
    scanf("%d",&n);
    
    printf("Individual no. of %d is:\n",n);
    while(n>0)
    {
        printf("%d\n\n",n%10);
        n=n/10;
    }
}