#include "main.h"

/**
 * leet - a function that encodes a string into 1337.
 * @str: an input string to encode
 * Return: An encode string
 */


char *leet(char *str)
{
    int i, j;
    char letters[] = {97, 65, 101, 69, 111, 79, 116, 84, 108, 76};
    char nums[] = {52, 52, 51, 51, 48, 48, 55, 55, 49, 49};

    i = 0;

    while (str[i])
    {
        for (j = 0; j < 10; j++)
        {
            if (str[i] == letters[j])
            {
                str[i] = nums[j];
                break;
            }
        }
        i++;
    }
    return str;
}