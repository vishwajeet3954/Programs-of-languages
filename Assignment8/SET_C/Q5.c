#include <stdio.h>
#include <string.h>

int main() {
    int i;
    char *str[5] = {"Apple","Banana","Mango","Cherry","Grapes"};

    char *largest = str[0];
    char *smallest = str[0];

    for (i = 1; i < 5; i++) 
    {
        if (strcmp(*(str + i), largest) > 0) {
            largest = *(str + i);
        }
        if (strcmp(*(str + i), smallest) < 0) {
            smallest = *(str + i);
        }
    }

    printf("Largest string  : %s\n", largest);
    printf("Smallest string : %s\n", smallest);

    return 0;
}
