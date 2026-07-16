#include<stdio.h>
float main()
{
	float a, b, c;
	printf("Enter sides of triangle a,b,c: ");
	scanf("%f %f %f",&a,&b,&c);
	float s=(a+b+c)/2;
	printf("area of triangle is:%.1fsqrt. ",s*(s-a)*(s-b)*(s-c));
}