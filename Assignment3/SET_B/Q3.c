#include<stdio.h>
int main()
{
	float r;
	int choice;
	#define PI 3.14
	printf("Enter radius of circle: ");
	scanf("%f",&r);
	
	printf("1: Area of circle.\n2: Circumference of circle.\n");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1: printf("Area of Circle is:%.2f square cm\n",3.14*r*r);
				printf("THANK YOU 😀");
			break;
		case 2: printf("The circumference of circle is:%.2f\n",2*PI*r);
				printf("THANK YOU 😀");
			break;
		default:
			printf("Give a valid radius or menu choice.");
			printf("TRY AGAIN! 🙄");
	}
	
	
}