#include <stdio.h>

/**
 * Difference between automatic and static local variable
*/

void foo()
{
    // static int count = 0;
    int count = 0;
    count++;
    printf("Count is %d\n", count);
}

int main()
{
    foo();
    foo();
    foo();

    return (0);
}