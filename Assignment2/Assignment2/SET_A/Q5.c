#include<stdio.h>
int main()
{
	int a;
	printf("Enter an Intiger No.: ");
	scanf("%d", &a);
	if (a%5==0)
	{
	    printf("%d is Divisible by 5.",a);
	}
	else
	{
	    printf("%d is Not divisible by 5.",a);
	}
}