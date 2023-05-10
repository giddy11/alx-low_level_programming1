#include <stdio.h>

// What is the output of the following C program fragment?
// Assume size of interger is 4 bytes.

/**
 * Notes: According to C99 standard
 * The sizeof operator yields the size (in bytes) of its operand, which may be an expression
 * or a parenthesized name of a type. The size is determined from the type of the operand.
 * If the type of the operand is a variable length array type, then the operand is evaluated;
 * Otherwise, the operand is not evaluated and the result is an interger constant.
*/

/***
 * i = 5
 * var = 4
*/

int main()
{
    int i = 5;
    int var = sizeof(i++);

    printf("%d %d\n", i, var);

    return (0);
}