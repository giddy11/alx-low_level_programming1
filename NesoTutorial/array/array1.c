#include <stdio.h>
#define N 9


int main()
{
    int a[N] = {34,56,54,32,67,89,90,32,21};

    for(int i = N - 1; i >= 0; i--)
    {
        printf("%d ", a[i]);
    }


    return (0);
}