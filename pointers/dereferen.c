#include <stdio.h>

int main()
{
    int n;
    int *p;

    n = 98;
    p = &n;

    printf("value of n : %d\n", n);
    printf("Address of n : %p\n\n", &n);

    printf("value of p : %d\n", p);
    printf("Address of p in n : %p\n\n", &p);

    *p = 402;
    printf("value of n : %d\n", n);
    printf("value of p : %d\n", p);

    return (0);
}