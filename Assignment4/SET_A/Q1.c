#include<stdio.h>
int main()
{
	int n,i=1;
	printf("Ener a Number: ");
	scanf("%d",&n);
	
	do
	{
		printf("%d ",i);
		i++;
	}while(i<=n);
}