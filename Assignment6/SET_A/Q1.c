#include<stdio.h>
int add(int x, int y)
{
    return x+y;
}
int main()
{
    int a,b,c;
    printf("Enter Two digits: ");
    scanf("%d %d",&a,&b);
    
    c=add(a,b);
    printf("Sum = %d",c);
    return 0;
}
