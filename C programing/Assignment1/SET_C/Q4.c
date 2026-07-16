#include<stdio.h>
float main()
{
	float c, s, p;
	printf("Enter Cost Price:");
	scanf("%f",&c);
	printf("Enter Selling price:");
	scanf("%f",&s);
	p=s-c;
	if
	    (p>0)
	    printf("The Profit is:%.2f",p);
	else
	printf("The LOSS is:%.2f",p);
}