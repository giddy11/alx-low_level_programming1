#include <stdio.h>

/**
 * WAP to find the largest and smallest element in an array
*/


void minMax(int arr [], int len, int *min, int *max)
{
    *min = *max = arr[0];

    for (int i = 1; i < len; i++)
    {
        if (arr[i] > *max)
            *max = arr[i];

        if (arr[i] < *min)
            *min = arr[i];
    }
}

int main()
{
    int a[] = {23, 45, 6, 98};
    int min, max, len;
    min = max = a[0];
    len = sizeof(a) / sizeof(a[0]);

    minMax(a, len, &min, &max);

    printf("max:%d    min:%d    ", max, min);


    return (0);
}