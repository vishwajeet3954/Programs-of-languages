#include <stdio.h>

int main()
{
    int n1, n2, i, j, k;
    int a[20], b[20], c[40];

    printf("Enter size of first sorted array: ");
    scanf("%d", &n1);
    printf("Enter %d elements in ascending order:\n", n1);
    for(i = 0; i < n1; i++)
        scanf("%d", &a[i]);

    printf("Enter size of second sorted array: ");
    scanf("%d", &n2);
    printf("Enter %d elements in ascending order:\n", n2);
    for(i = 0; i < n2; i++)
        scanf("%d", &b[i]);

    i = j = k = 0;
    while(i < n1 && j < n2)
    {
        if(a[i] < b[j])
            c[k++] = a[i++];
        else
            c[k++] = b[j++];
    }
    while(i < n1)
        c[k++] = a[i++];
    while(j < n2)
        c[k++] = b[j++];
    printf("Merged sorted array:\n");
    for(i = 0; i < k; i++)
        printf("%d ", c[i]);
    printf("\n");

    return 0;
}

