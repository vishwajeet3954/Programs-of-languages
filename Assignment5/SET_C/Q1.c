#include<stdio.h>
int main()
{
	int a,flag,d;
	
	for(a=2;a<=100;a++)
	{
		flag=1;
		for(d=2;d<a;d++)
		{
			if(a % d == 0)
			{
				flag=0;
				break;
			}
		}
		if(flag==1)
		printf("%d ",a);
	}
	printf("\n");
}
