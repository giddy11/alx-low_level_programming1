#include <stdio.h>

/**
 * Write a program to check whether a number is a strong number or not
 * 
 * A strong number is a number in which the sum of factorial of individual digits of a number
 * is equal to the original number.
 * For example:
 *      145 = 1! + 4! + 5! = 1 + 24 + 120 = 145
 * 
 * Steps:
 *      Calculate the factorial of each digit of a number and add them
*/



int main()
{
    int num, q, rem, res, fact;
    num = 678;
    q = num;
    res = 0;
    fact = 1;

    while(q != 0)
    {
        rem = q % 10;
        for(int i = 1; i <= rem; i++)
        {
            fact *= i;
        }
        res = res + fact;
        fact = 1;
        q = q / 10;
    }

    if(res == num)
        printf("This is an Strong Number\n");
    
    else
        printf("Not\n");

    return (0);
}