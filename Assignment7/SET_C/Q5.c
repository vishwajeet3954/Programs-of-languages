#include <stdio.h>

int main()
{
    int n, a[20], temp[20], k;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for(int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("Enter number of positions to rotate: ");
    scanf("%d", &k);

    k = k % n;

    for(int i = 0; i < k; i++)
        temp[i] = a[n - k + i];

    for(int i = n - k - 1; i >= 0; i--)
        a[i + k] = a[i];

    for(int i = 0; i < k; i++)
        a[i] = temp[i];

    printf("Array after right rotation:\n");
    for(int i = 0; i < n; i++)
        printf("%d ", a[i]);
    printf("\n");

    return 0;
}

