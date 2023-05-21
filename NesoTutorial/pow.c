#include <stdio.h>

/**
 * The Power of an Interger
 * 
*/


int main()
{
    float resDouble = 1.0;
    int exponent, base, res;
    base = 5;
    res = 1;
    exponent = -4;

    if(exponent > 0)
    {
        while (exponent != 0)
            {
                res *= base;
                exponent--;
            }

        printf("%d\n", res);
    }
    else if(exponent < 0)
    {
        while (exponent != 0)
        {
            resDouble = resDouble * (1.0/ base);
            exponent++;
        }

        printf("%.10f\n", resDouble);
    }

    return (0);
}