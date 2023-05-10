#include <stdio.h>
#include <math.h>

/**
 * A program to check whether a number is prime or not
 * 
 * A number greater than 1 is a prime number, if it has only 2 factors,
 * namely 1 and the number itself
 * 
 * E.g; 2,3,5,7,11,13,etc
 * 
 * Is 1 a prime number?
 *      It is not bcos it violates the fundamental theorem of arithmetic
 * The theory states that every positive interger greater than 1 can be written uniquely
 * as the product of primes
 * E.g 9 = 3 * 3
 * 
 * A composite number is a positive interger which is not prime ie which
 * has factors other than 1 and itself
 * E.g; 4, 6, 8, 9, etc
 * 
 * Steps:
 *      Calculate the square root of the number
 *      Divide that number by numbers less than or equal to the square root of the number
 *      If it is divisible by any of the numbers, then we can say that the number isnt a prime number
 *      Else it is a prime number
*/

int main()
{
    int num;
    int sqrtNum, divisor;
    printf("Please enter only positive numbers and number greater than 0: ");
    scanf("%d", &num);

    if(num > 1)
    {
        sqrtNum = sqrt(num);
        divisor = sqrtNum;

        while(divisor <= sqrtNum)
        {
            if (num == 2 || num == 3)
                break;
            if (num % divisor == 0)
            {
                printf("%d is not a prime number\n", num);
                return (0);
            }
            divisor++;
        }

        printf("%d is a prime\n", num);
    }
    else
        printf("Invalid Input\n");
    
    return (0);
}