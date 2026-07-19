#include<stdio.h>
int main()
{
	int a;
	printf("Enter an Intiger No.: ");
	scanf("%d",&a);
	if (a==100)
	{
	    printf("Your Number %d is Equal to 100.",a);
	}
	else if (a>100)
	{
	printf("Your Number %d is Greater than 100.",a);
    }
	else{
	printf("Your Number %d is Smaller than 100.",a);
    }
}