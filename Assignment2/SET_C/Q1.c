#include<stdio.h>
float main()
{
	float m,e,mth;
	printf("Enter Your Marks of Marathi, English and Maths: ");
	scanf("%f %f %f",&m,&e,&mth);
	float total=m+e+mth, average=(total*100)/300;

	if(average<=49 && average>=40)
		printf("Class-III\n");
	else if(average<=59 && average>=50)
		printf("Class-II\n");
	else if(average<=69 && average>=60)
		printf("Class-I\n");
	else if(average>=70)
		printf("Distinstion\n");
	else
		printf("Fail\n");
	printf("You Obtained %.2f%\n",average);
}
