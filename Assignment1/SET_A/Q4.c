#include<stdio.h>
float main()
{
	#define PI 3.14
	float r;
	printf("Enter the radius of Circle: ");
	scanf("%f", &r);
	printf("The circumference of circle is:%.2f\n",2*PI*r);
	return 0;
}
