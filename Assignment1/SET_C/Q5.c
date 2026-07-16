#include<stdio.h>
float main()
{
	float ph, mt, ch, bo, mr, en;
	printf("Enter your marks of Physics: ");
	scanf("%f", &ph);
	printf("Enter your marks of Maths: ");
	scanf("%f", &mt);
	printf("Enter your marks of Chemistry: ");
	scanf("%f", &ch);
	printf("Enter your marks of Biology: ");
	scanf("%f", &bo);
	printf("Enter your marks of Marathi: ");
	scanf("%f", &mr);
	printf("Enter your marks of English: ");
	scanf("%f", &en);
	float total=ph+mt+ch+bo+mr+en;
	printf("\nYour total marks =%.2f \n\nYour percentage =%.2f%\n",total,(total*100)/600);
}