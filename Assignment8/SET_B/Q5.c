#include <stdio.h>

int main() {
    char str1[100], str2[50];
    char *p1, *p2;

    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);

    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);

    p1 = str1;
    p2 = str2;

    while (*p1 != '\0' && *p1 != '\n') {
        p1++;
    }

    while (*p2 != '\0' && *p2 != '\n') {
        *p1 = *p2;
        p1++;
        p2++;
    }

    *p1 = '\0';

    printf("Concatenated string: %s\n", str1);

    return 0;
}

