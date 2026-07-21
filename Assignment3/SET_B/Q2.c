#include<stdio.h>
int main()
{
	int a, b, choice;
	printf("Enter two digits: ");
	scanf("%d %d",&a,&b);
	
	printf("1: Equality\n");
	printf("2: Less Than\n");
	printf("3: Quotient and Remainder\n");
	printf("4: Greter Than\n");
	
	printf("Enter a choice from menu.: ");
	scanf("%d",&choice);
	
	switch(choice)
	{
		case 1:
		if(a == b)
			printf("%d is equal %d\n",a,b);
		else
			printf("%d is not equal %d\n",a,b);
			break;
			
		case 2:
		if(a < b)
			printf("%d is Less than %d\n",a,b);
		else
			printf("%d is Less than %d\n",b,a);
			break;
		case 3:
		if(b != 0)
		{
			printf("Quotient = %d\n",a/b);
			printf("Remainder = %d\n",a%b);
		}
		else
			printf("Cannot divide by zero!\n");
			break;
			
		case 4:
		if(a > b)
			printf("%d is Greter than %d\n",a,b);
		else
			printf("%d is Greter then %d\n",b,a);
			break;
			
		default:
			printf("Invalid choice\n");
	}
}