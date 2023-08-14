#include <stdio.h>
#include <stdarg.h>

int sum(int x, ...)
{
    va_list myNum;
    va_start(myNum, x);
    int res = x + va_arg(myNum, int);
    va_end(myNum);

    return res;
}


int main()
{
    int n;
    n = sum(10, 45, 25);

    printf("%d\n", n);

    return (0);
}