#include <stdio.h>
#include <math.h>


/**
 * 3 2 1 0
 * 2 2 2 2
 * 1 0 0 1
 *
 * 2^3 * 1 + 2^2 * 0 + 2^1 * 0 + 2^0 * 1
 * 9
 *
 *
*/

int main()
{
    int num, bin, weight, q, res, mul, rem;
    weight = 0;
    res = 0;
    printf("Enter the binary number: ");
    scanf("%d", &num);
    q = num;

    while(q != 0)
    {
        rem = q% 10;
        mul = rem * pow(2,weight);
        res = res + mul;
        q /= 10;
        weight++;
    }

    printf("The Decimal equivalent of the binary number %d is: %d", num, res);


    return (0);
}