#include<stdio.h>
int small(int a,int b,int c)
{
    if(a<b && a<c)
        printf("The smallest no. is %d",a);
    else if(b<a && b<c)
        printf("The smallest no. is %d",b);
    else
        printf("The smallest no. is %d",c);
    return 0;
}
int main()
{
    int x,y,z;
    printf("Enter Three no. for compare: ");
    scanf("%d %d %d",&x,&y,&z);
    
    small(x,y,z);
    return 0;
}
