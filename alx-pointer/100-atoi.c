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
    int sign = 1;
    int result = 0;

    while (*s == ' ')
    {
        s++;
    }

    if (*s == '-')
    {
        sign = -1;
        s++;
    }
    else if (*s == '+')
    {
        s++;
    }

    while (*s >= '0' && *s <= '9')
    {
        result = result * 10 + (*s - '0');
        s++;
    }

    return result * sign;
}
