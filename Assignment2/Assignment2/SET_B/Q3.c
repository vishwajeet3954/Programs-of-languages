#include<stdio.h>
char main()
{
	char c;
	printf("Enter the lowercase character: ");
	scanf("%c",&c);
	
	if (c == 'a' || c=='e' || c=='i' || c=='o' || c=='u')
		printf("%c is a Vowel.\n",c);
	else
		printf("%c is not a vowel.\n",c);
}
