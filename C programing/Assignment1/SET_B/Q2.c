#include<stdio.h>
float main()
{
	float t, c;
	printf("Enter the temperature in Fahrenheit(f): ");
	scanf("%f", &t);
	c=(t-32)*5/9;
	printf("In Celsius temperature is:%.2fc",c);
	printf("\nIn Kelvin Temperature is:%.2fk\n",(c+273.15));
}
