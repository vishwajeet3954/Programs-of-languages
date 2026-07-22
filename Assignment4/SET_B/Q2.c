#include <stdio.h>

int main() 
{
    int x,y,p=1,i;
    
    printf("Enter values: ");
    scanf("%d %d", &x, &y);

    for (i=1;i<=y;i++)
    {
        p=p*x;
    }
    printf("\n%d^%d=%d",x,y,p);
}
