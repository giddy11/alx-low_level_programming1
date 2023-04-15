#include "main.h"

/**
 * puts_half - a function that prints half of a string,
 * followed by a new line
 *
 * @str: char pointer variable
 *
 * Return: nothing
 */
void puts_half(char *str)
{
    int len = 0, i, j;

    while (str[len] != '\0')
    {
        len++;
    }

    j = (len + 1) / 2;

    for (i = j; str[i] != '\0'; i++)
    {
        _putchar(str[i]);
    }
    _putchar(10);
}
