#include<stdio.h>
float main()
{
	float x1, x2, y1, y2;
	printf("Enter your co-ordinates:");
	scanf("%f %f %f %f", &x1, &x2, &y1, &y2);
	printf("The distance is: %.2f",(x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
}
