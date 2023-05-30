#include <stdio.h>

/**
 * What is a Perfect Number
 * >>This is a positive interger that is equal to the sum of all its proper positive
 *   divisors excluding the number itself
 * 
 * for example 6; 1,2,3
 * 28 is also a perfect number
*/



int main()
{
    int num, temp, rem, sum, i, div;
    printf("Enter a positive number: ");
    scanf("%d", &num);
    temp = num;
    sum = 0;
    i = 1;

    while(i < num)
    {
        rem = temp % i;
        if (rem == 0)
        {
            sum += i;
        }
        i++;
    }

    if (sum == num)
        printf("This is a perfect number because the sum, %d is same as the number\n", sum);
    else
        printf("This is not a perfect number because the sum, %d is not the same as the number\n", sum);

    return (0);
}