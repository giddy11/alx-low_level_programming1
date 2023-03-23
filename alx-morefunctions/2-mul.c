#include <stdio.h>

/**
 * mul - a function that multiplies two intergers
 * @a: int type number
 * @b: int type number
 * Return: a * b, multiple of a and b
 */

int mul(int a, int b) 
{
    return a * b;
}


int main(void)
{
    printf("%d\n", mul(98, 1024));
    printf("%d\n", mul(-402, 4096));
    return (0);
}