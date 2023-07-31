#include <stdio.h>


int add(int n)
{
    if (n == 0) 
    {
        return (0);
    }
    return n + add(n - 1);
}

int main(void)
{
    int a = add(5);
    printf("%d\n", a);
    return (0);
}