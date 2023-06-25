#include <stdio.h>

void print_diagsums(int *a, int size)
{
    int i, sum, sizer;
    sizer = size * size;
    sum = 0;

    for (i = 0; i <= sizer;)
    {
        sum += a[i];
        if(i < 1)
            i += size + 1;
        else
            i += size + 1;

    }
    printf("%d, ", sum);

    sum = 0;

    for (i = sizer - size; i > 0;)
    {
        sum += a[i];
        i = i - (size - 1);

    }
    printf("%d\n", sum);
}

int main()
{
    int c3[3][3] = {
        {0, 1, 5},
        {10, 11, 12},
        {1000, 101, 102},
    };
    int c5[5][5] = {
        {0, 1, 5, 12124, 1234},
        {10, 11, 12, 123521, 12512},
        {1000, 101, 102, 12545, 214543435},
        {100, 1012451, 11102, 12545, 214543435},
        {10, 12401, 10452, 11542545, 1214543435},
    };
    print_diagsums((int *)c3, 3);
    print_diagsums((int *)c5, 5);

    return (0);
}