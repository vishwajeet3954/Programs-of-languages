#include<stdio.h>
int main()
{
    int a,b;
    int *x=&a,*y=&b;
    
    printf("Enter Two values for Swap: ");
    scanf("%d %d",&a,&b);
    
    printf("Before swap: \n a = %d, b = %d",*x,*y);
    int temp = *y;
    *y = *x;
    *x = temp;
    
    printf("\n\nAfter Swaping: \n a = %d, b = %d",*x,*y);
    
    return 0;
}
