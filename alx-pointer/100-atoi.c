#include "main.h"

/**
 * _atoi - a function that converts string to integer
 *
 * @s: A string input
 *
 * Return: integer from conversion
 */

int _atoi(char *s)
{
    int total = 0;
    int  sign = 1;
    char not_a_num = 0;

    while (*s != '\0')
    {
        if (*s == '-')
        {
            sign *= -1;
        }

        if (*s >= '0' && *s <= '9')
        {
            not_a_num = 1;
            total = total * 10 + *s - '0';
        }
        else if (not_a_num)
        {
            break;
        }

        s++;
    }

    if(sign < 0)
    {
        total = -total;
    }
    
    return total;
    
}
