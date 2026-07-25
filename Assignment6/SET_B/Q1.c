#include<stdio.h>
int vowel(char x)
{
    if(x == 'a' || x == 'e' || x == 'i' || x== 'o' || x== 'u' || x== 'A' || x== 'E' || x== 'I' || x== 'O' || x== 'U')
    {
        printf("%c is a Vowel.",x);
    }
    else
        printf("%c is a Consonant.",x);
    return 0;
}
int main()
{
    char c;
    printf("Enter a character: ");
    scanf("%c",&c);
    vowel(c);
    return 0;
}
