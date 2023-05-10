#include <stdio.h>

// What is the output of the following 

/**
 * 
*/

/***
 * d = 
 * c = 
 * b = 
 * a = 1
*/

int main()
{
    int a = 1;
    int b = 1;
    int c = ++a || b++;
    int d = b-- && --a;

    printf("%d %d %d %d\n", d, c, b, a);

    return (0);
}