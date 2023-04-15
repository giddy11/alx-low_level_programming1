#include <stdio.h>

int main(void)
{
    int a[5];
    int *p;
    int *p2;

    *a = 98;
    *(a + 1) = 198;
    *(a + 2) = 298;
    a[3] = 398;
    *(a + 4) = 498;
    printf("Value of [0]: %d\nAddress of [0]: %p\n\n", *a, &(*a));
    printf("Value of [1]: %d\nAddress of [1]: %p\n\n", *(a + 1), &(*(a + 1)));
    printf("Value of [2]: %d\nAddress of [2]: %p\n\n", *(a + 2), &(*(a + 2)));
    printf("Value of [3]: %d\nAddress of [3]: %p\n\n", *(a + 3), &(*(a + 3)));
    printf("Value of [4]: %d\nAddress of [4]: %p\n\n", *(a + 4), &(*(a + 4)));

    printf("----------------\n");


    p = a + 1;
    *p = 98;

    printf("Value of [a+1]: %d\nAddress of [a+1]: %p\n\n", *(a + 1), &(*(a + 1)));


    p2 = a + 3;
    *p2 = *p + 1337;
    printf("Value of [a+3]: %d\nAddress of [a+3]: %p\n\n", *(a + 3), &(*(a + 3)));

    return (0);
}