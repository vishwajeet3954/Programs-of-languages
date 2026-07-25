#include<stdio.h>
int larger(int a,int b)
{
    if(a>b)
        printf("%d is Largest.",a);
    else
        printf("%d is Largest.",b);
    return 0;
}
int main()
{
    int x,y;
    printf("Enter two numbers for conpare: ");
    scanf("%d %d",&x,&y);
    
    larger(x,y);
    
    return 0;
}
