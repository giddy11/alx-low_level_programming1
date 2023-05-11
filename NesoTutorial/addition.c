#include <stdio.h>

// Write a program to add two numbers without using + operator. 

/**
 * So the idea is to use increment and decrement operators
 * Steps:
 *      x = 3, y = 4
 *      x++; y++;
 *      Repeat the above until y becomes 0
*/

int main()
{
    int x, y;
    printf("Enter the two numbers you want to add: ");
    scanf("%d %d", &x, &y);

    while(y != 0)
    {
        if (y < 0)
        {
            x--;
            y++;
        }
        else
        {
            x++;
            y--;
        }
    }

    printf("The Sum of the two values is %d\n", x);

    return (0);
}