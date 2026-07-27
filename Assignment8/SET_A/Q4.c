#include<stdio.h>
int main()
{
    int a[6] = {1,2,3,4,5,6};
    int *p = a;
    int i,sum = 0;
    
    for(i=0;i<6;i++)
    {
        sum = sum + *p;
        p++;
    }
    printf("Sum of arry = %d",sum);
}
