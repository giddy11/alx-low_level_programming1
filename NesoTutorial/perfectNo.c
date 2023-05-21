#include <stdio.h>

/**
 * What is a Perfect Number
 * >>This is a positive interger that is equal to the sum of all its proper positive
 *   divisors excluding the number itself
 * 
 * for example 6; 1,2,3
*/



int main()
{
    // int num, temp, rem, sum, i, div;
    // num = 16;
    // temp = num;
    // sum = 1;
    // i = 2;

    // while(div != 1)
    // {
    //     rem = temp % i;
    //     if(rem != 0)
    //         i++;
        
    //     if (rem == 0)
    //     {
    //         div = temp / i;
    //         temp = div;
    //         sum += i;
    //     }
    // }

    // if (sum == num)
    //     printf("This is a perfect number: %d\n", sum);
    // else
    //     printf("This is not a perfect number: %d\n", sum);

    // return (0);

    int num, temp, rem, sum, i, div;
    num = 28;
    temp = num;
    sum = 0;  // Initialize sum as 0, not 1
    i = 1;    // Initialize i as 1, not 2
    div = 0;  // Initialize div as 0

    while (i <= temp / 2) {  // Loop until i reaches half of temp
        rem = temp % i;
        
        if (rem == 0) {
            div = temp / i;
            sum += i;
        }
        
        i++;
    }

    if (sum == num)
        printf("This is a perfect number: %d\n", sum);
    else
        printf("This is not a perfect number: %d\n", sum);

    return 0;
}