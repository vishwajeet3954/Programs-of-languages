#include<stdio.h>
int main()
{
	int x,y;
	printf("Enter your co-ordinates: ");
	scanf("%d %d",&x,&y);
	if(x>=0 && y>=0)
		printf("Quadrant I(%d,%d)",x,y);
	else if(x<0 && y>=0)
		printf("Quadrant II(%d,%d)",x,y);
	else if(x<0 && y<0)
		printf("Quadrant III(%d %d)",x,y);
	else if(x>=0 && y<0)
                printf("Quadrant III(%d %d)",x,y);
}
