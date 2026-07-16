#include<stdio.h>
float main()
{
	float l, b, h;
	printf("enter length, breadth, height of cuboid");
	scanf("%f %f %f", &l, &b, &h);
	printf("The surface area of cuboid is: %.2f\n",2*(l*b+l*h+b*h));
	printf("The Volume of cuboid is: %.2f\n", 1*b*h);
}
