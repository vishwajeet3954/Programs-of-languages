#include <stdio.h>

void reverseArray(int *arr, int size) {
    int i, temp;
    int *start = arr;
    int *end = arr + size - 1;

    while (start < end) {
        temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
    }
}

int main() {
    int arr[5] = {10, 20, 30, 40, 50};
    int i;

    printf("Original array:\n");
    for (i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }

    reverseArray(arr, 5);
    
    printf("\nReversed array:\n");
    for (i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}

