#include<stdio.h>
int main()
{
	int s,a,n;
	
	printf("Enter the value of rows");
	scanf("%d",&n);
	
	for(s=0;s<n;s++)
	{
		printf("*");
		for(a=0;a<s;a++)
		{
			printf("A*");
		}
		printf("\n");
	}
	printf("\n");
}
