#include <stdio.h>
int findMax(int *arr, int size);

int main() {
    int arr[5] = {12, 45, 7, 89, 23};
    int max;

    max = findMax(arr, 5);

    printf("Maximum element in the array = %d\n", max);

    return 0;
}

int findMax(int *arr, int size) {
    int i, max;

    max = arr[0];

    for (i = 1; i < size; i++) {
        if (*(arr + i) > max) {
            max = *(arr + i);
        }
    }

    return max;
}

