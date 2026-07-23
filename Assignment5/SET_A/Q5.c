#include<stdio.h>
int main()
{
	int col,row,n;
	printf("Enter the value of n: ");
	scanf("%d",&n);
	
	for(col=n;col<=row;col--)
	{
		printf("\n");
		for(row=1;row<=col;row++)
		printf("%d ",row);
	}
	printf("\n");
}