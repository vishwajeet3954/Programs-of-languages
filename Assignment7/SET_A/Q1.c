#include <stdio.h>

int main()
{
    int n, a[10], max;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    max = a[0];
    for(int i = 1; i < n; i++)
    {
        if(a[i] > max)
        {
            max = a[i];
        }
    }
    printf("Maximum element = %d", max);
		
		int min=a[0];
		
		for(int i = 1; i < n; i++)
    {
        if(a[i] < min)
        {
            min = a[i];
        }
    }
    printf("\nMinimum element = %d\n", min);
    return 0;
}

