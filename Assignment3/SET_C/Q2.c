#include<stdio.h>
float main()
{
	float m,e,mth;
	int grade;
	
	printf("Enter Your Marks of Marathi, English and Maths: ");
	scanf("%f %f %f",&m,&e,&mth);
	
	float total=m+e+mth, average=(total*100)/300;

	if(average<=49 && average>=40)
		grade = 1;
	else if(average<=59 && average>=50)
		grade = 2;
	else if(average<=69 && average>=60)
		grade = 3;
	else if(average>=70)
		grade = 4;
	else
		grade = 5;
	
	switch (grade)
	{
		case 1: printf("\nClass-III\n");
			break;
		case 2: printf("\nClass-II\n");
			break;
		case 3: printf("\nClass-I\n");
			break;
		case 4: printf("\nDistinction\n");
			break;
		case 5: printf("\nFail\n");
			break;
		default:
				printf("Enter valid marks");
	}
	printf("You Obtained %.2f%\n",average);
}