#include<stdio.h>
int main()
{
	char alfa;
	printf("Enter an alfabate: ");
	scanf("%c",&alfa);
	
	switch(alfa)
	{
		case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u':
			printf("%c is a Vowel.\n",alfa);
			break;
		default:
			printf("%c is a Consonant.",alfa);
	}
}