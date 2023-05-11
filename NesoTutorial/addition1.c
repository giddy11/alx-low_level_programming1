#include <stdio.h>

// Write a program to add two numbers without using + operator. 

/**
 * So the idea is to use Half Adder Logic
 * This takes 2bits at a time and produces the output which is
 * the sum and the carry bit
 * 
 * A B S C
 * 0 0 0 0
 * 0 1 1 0
 * 1 0 1 0
 * 1 1 0 1
 * 
 * from the above we can say that
 * S = A xor B
 * C = A AND B
 * 
 * Steps:
 *      
*/

int main()
{
    int x, y, sum, carry;
    printf("Enter the two numbers you want to add: ");
    scanf("%d %d", &x, &y);

    while(y != 0)
    {
        sum = x ^ y;
        carry = (x&y) << 1;
        x = sum;
        y = carry;
    }

    printf("The Sum of the two values is %d\n", x);

    return (0);
}