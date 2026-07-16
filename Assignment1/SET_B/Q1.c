#include<stdio.h>
float main()
{
	float r, h;
	#define PI 3.14
	printf("Enter the radius and hight of cylinder: ");
	scanf("%f %f",&r,&h);
	printf("The Surface area of cylinder is:%.2f",(2*PI*r*r)+(2*PI*r*h));
	printf("\nThe Volume of cylinder is:%.2f\n",(PI*r*r*h));
}
