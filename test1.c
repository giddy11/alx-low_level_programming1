#include <stdio.h>


int largest_number(int a, int b, int c);

int main()
{
    int a, b, c;
        int largest;

        a = 972;
        b = 972;
        c = 0;

        /**
         * if a >= b && a >= c
         * print largest = a
         * 
         *  if b >= a && b >= c
         * print largest = b
         * 
         * if c >= a && C >= b
         * print largest = c
        */

        largest = largest_number(a, b, c);

        printf("%d is the largest number\n", largest);
    

    return (0);
}

int largest_number(int a, int b, int c)
{
    int largest;

    if (a >= b && a >= c)
    {
        largest = a;
    }
    else if (b >= a && b >= c)
    {
        largest = b;
    }
    else
    {
        largest = c;
    }

    return (largest);
}
