#include<stdio.h>
float area(float r)
{
    return 3.14159*(r*r);
}
int main()
{
    float a,r;
    printf("Enter Radius of circle: ");
    scanf("%f",&r);
    a=area(r);
    printf("Radius of Circle is: %.2f",a);
}
