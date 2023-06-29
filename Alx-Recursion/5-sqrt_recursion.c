#include <stdio.h>

int check_pow(int a, int b)
{
    if (b > a / b)
        return -1;

    if (b * b == a)
        return b;

    return check_pow(a, b + 1);
}

int _sqrt_recursion(int n)
{
    if (n < 0)
        return -1;

    if (n == 0 || n == 1)
        return n;

    return check_pow(n, 2);
}



int main(void)
{
    int r;

    r = _sqrt_recursion(1);
    printf("%d\n", r);
    r = _sqrt_recursion(1024);
    printf("%d\n", r);
    r = _sqrt_recursion(16);
    printf("%d\n", r);
    r = _sqrt_recursion(17);
    printf("%d\n", r);
    r = _sqrt_recursion(25);
    printf("%d\n", r);
    r = _sqrt_recursion(-1);
    printf("%d\n", r);
    return (0);
}