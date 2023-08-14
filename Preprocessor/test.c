#include <stdlib.h>
#include <stdio.h>

// #define SUB(a, b) a - b
// #define SUB(a, b) (a) - (b)
#define SUB(a, b) ((a) - (b))

int main(void)
{
    int a = SUB(3,2);

    printf("Result= %d\n", a);

    return (EXIT_SUCCESS);
}