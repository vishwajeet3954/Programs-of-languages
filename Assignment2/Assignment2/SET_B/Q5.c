#include<stdio.h>
int main()
{
	int c,p,s;
	printf("Enter the cost and selling cost: ");
	scanf("%d %d",&c,&s);

	p=s-c;

	if (s>c)
		printf("Your profit is %d",p);
	else
		printf("Your loss is %d",p);
}
