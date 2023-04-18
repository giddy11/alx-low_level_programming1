#include "main.h"

/**
 * string_toupper - Change all lowercase letters to uppercase
 * @str: int pointer string variable
 * Return: c
 */

char * string_toupper(char *str)
{
        int i;

        for (i = 0; str[i] != '\0'; i++)
        {
                if (str[i] > 96 && str[i] < 123)
                {
                        str[i] = str[i] - 32;
                }
        }

        return (str);
}