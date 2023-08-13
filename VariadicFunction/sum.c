#include <stdio.h>
#include <stdarg.h>

int sum(int count, ...)
{
    int result = 0;
    va_list myNum;
    va_start(myNum, count);

    for (int i = 0; i < count; i++)
    {
        result = result + va_arg(myNum, int);
    }

    va_end(myNum);

    return result;
}


int main()
{
    int n;
    n = sum(2, 45, 25, 2);

    printf("%d\n", n);

    return (0);
}