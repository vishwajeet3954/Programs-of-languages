#include<stdio.h>
int main()
{
	int a, b, menu;
	printf("Enter Two digits: ");
	scanf("%d %d",&a,&b);
	
	printf("1: Addition(+)\n");
	printf("2: Subtraction(-)\n");
	printf("3: Division(/)\n");
	printf("4: Multiplication(x)\n");
	printf("5: Reminder(%)\n");
	
	printf("Enter Digit from this menu: \n");
	scanf("%d",&menu);
	
	switch(menu)
	{
		case 1: printf("%d + %d = %d\n",a,b,a+b);
			break;
		case 2: printf("%d - %d = %d\n",a,b,a-b);
			break;
		case 3: printf("%d / %d = %d\n",a,b,a/b);
			break;
		case 4: printf("%d x %d = %d\n",a,b,a*b);
			break;
		case 5: printf("The remainder= %d\n",a%b);
			break;
		default:
			printf("Enter a valid menu choice.\n");
	}
}