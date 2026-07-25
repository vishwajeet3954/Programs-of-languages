#include<stdio.h>
int swap(int a,int b)
{
    b = (a+b) - (a=b);
    printf("a = %d, b = %d",a,b);
    return 0;
}
int main()
{
    int x,y;
    printf("Enter values for swap: ");
    scanf("%d %d",&x,&y);
    swap(x,y);
    return 0;
}
