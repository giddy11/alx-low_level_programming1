#include <stdio.h>


int main()
{
    int a[] = {23, 45, 6, 98};
    int min, max;
    min = max = a[0];

    for (int i = 1; i < 3; i++)
    {
        if (a[i] > max)
            max = a[i];

        if (a[i] < min)
            min = a[i];
    }

    printf("max:%d    min:%d    ", max, min);


    return (0);
}