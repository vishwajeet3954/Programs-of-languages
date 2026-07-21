#include<stdio.h>

int main()
{
	float s, l, w, a, b, c;
	int choice;
	
	printf("1: Area of Squeare.\n");
	printf("2: Area of Rectangle.\n");
	printf("3: Area of Triangle.\n\n");
	
	printf("Enter Your Choice from Menu....\n= ");
	scanf("%d",&choice);
	
	switch(choice)
	{
		case 1:	printf("\nYour Choice is\n1: Area of Square.\n\n");
				printf("Enter value of side: ");
				scanf("%f",&s);
				printf("\nThe area of Square is:%.2fm^2\n",s*s);
				break;
				
		case 2:	printf("\nYour Choice is\n2: Area of Rectangle.\n\n");
				printf("Enter length of rectangle:");
				scanf("%f",&l);
				printf("Enter breadth of rectangle:");
				scanf("%f",&w);
				c=l*w;
				printf("\nArea of Rectangle is:%.2fm^2\n",c);
				break;
		
		case 3: printf("\nYour Choice is\n3: Area of Triangle.\n\n");
				printf("Enter base of Triangle:");
				scanf("%f",&a);
				printf("Enter height of Triangle:");
				scanf("%f",&b);
				printf("\nArea of Triangle is:%.2fcm^2\n",0.5*a*b);
				break;
		
		default:
				printf("Error\n  : Enter valid Choice or Measurements.\n");	
	}
	
}