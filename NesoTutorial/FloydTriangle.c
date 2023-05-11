#include <stdio.h>

// Write a program to add two numbers without using + operator. 

/**
 * Floyd's Triangle (named after a computer scientist- Robert W. Floyd) is a right-angled
 * triangular array of natural numbers. It is filled by natural numbers consecutively starting
 * with 1 in the top left corner.
 * 
 * For example: A Floyd's triangle with 5 rows
 * 1
 * 2  3
 * 4  5  6
 * 7  8  9  10
 * 11 12 13 14 15
*/

int main()
{
    int row, n, res;

    printf("Enter the number of rows: ");
    scanf("%d", &row);
    n = 1;

    for(int i = 1; i <= row; i++)
    {
        for(int j = 1; j <= i; j++)
        {
            printf("%3d", n);
            n = n + 1;
        }
        printf("\n");
    }

    return (0);
}