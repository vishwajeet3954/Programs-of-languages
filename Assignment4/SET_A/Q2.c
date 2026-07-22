#include<stdio.h>
int main()
{
	int n,i=1;
	printf("Ener a Number: ");
	scanf("%d",&n);
	
	do
	{
		printf("%d ",n);
		n--;
	}while(i<=n);
}