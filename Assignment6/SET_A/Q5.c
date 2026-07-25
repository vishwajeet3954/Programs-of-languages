#include<stdio.h>
float temp(float f)
{
    return (f-32)*5/9;
}
int main()
{
    float c,t;
    printf("Enter Temperature in Fahrenheit: ");
    scanf("%f",&t);
    c = temp(t);
    printf("Temperature in Celsius: %.2f",c);
}
