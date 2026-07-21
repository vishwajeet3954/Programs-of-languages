#include<stdio.h>
int main()
{
	int choice;
	printf("1: option 1\n");
	printf("2: option 2\n");
	printf("3: option 3\n");
	printf("4: option 4\n");
	
	
	printf("Enter Your Chaice Number: ");
	scanf("%d",&choice);
	
	switch(choice)
	{
		case 1: printf("You selected option 1\n");
			break;
		
		case 2: printf("You selected option 2\n");
			break;
		
		case 3: printf("You selected option 3\n");
			break;
		
		case 4: printf("You selected option 4\n");
			break;
		default:
			printf("Invalid choice!\n");
	}
}
