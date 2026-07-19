#include<stdio.h>
float main()
{
	float l1,l2,l3;
	printf("Enter 3 sides of triangle: ");
	scanf("%f %f %f",&l1,&l2,&l3);

	if(l1+l2>l3)
		printf("This is a Valid Triange");
	else
		printf("This is not a Triangle");
}
