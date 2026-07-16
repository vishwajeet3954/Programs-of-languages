#include<stdio.h>
float main()
{
	float a, b;
	#define PI 3.14
	printf("Enter the inner radius and outer radius: ");
	scanf("%f %f", &a, &b);
	printf("The Perimeter of the Ring is: %2.f",2*PI*(a+b));
	printf("\nThe area of Ring is: %.2f\n",a*2-b*2);
}
