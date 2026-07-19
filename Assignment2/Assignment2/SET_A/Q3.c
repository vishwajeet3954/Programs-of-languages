#include<stdio.h>
int main()
{
	int a, b, c;
	printf("Enter three Intiger No.: ");
	scanf("%d %d %d", &a, &b, &c);
	if (a>b && a>c)
	{
	    printf("The largest no. is %d.",a);
	}
	else if (b>a && b>c)
	{
	    printf("The lagest no. is %d.",b);
	}
	else
	{
	    printf("The lagest no. is %d.",c);
	}
}