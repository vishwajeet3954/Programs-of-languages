#include<stdio.h>
float main()
{
	float a, r, t;
	printf("Enter amount: ");
	scanf("%f",&a);
	printf("Enter rate: ");
	scanf("%f",&r);
	printf("Enter time: ");
	scanf("%f",&t);
	printf("The Simple Interest is: %.2f\n",(a*r*t)/100);
	printf("The Total amount is: %.2f\n",((a*r*t)/100)+a);
}