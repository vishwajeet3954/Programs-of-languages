#include <stdio.h>

int main() {
    char str1[100], str2[100];
    char *p1, *p2;

    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);

    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);

    p1 = str1;
    p2 = str2;

    while (*p1 != '\0' && *p2 != '\0') {
        if (*p1 != *p2) {
            break;
        }
        p1++;
        p2++;
    }

    if (*p1 == *p2) {
        printf("Both strings are equal\n");
    } else {
        printf("Strings are not equal\n");
    }

    return 0;
}

