#include "main.h"

/**
 * cap_string - capitalize all words of a string
 * @str: pointer string variable
 * Return: `str`
 */

char *cap_string(char *str)
{
        int i, j;
        char arr[] = {44, 9, 10, 32, 59, 46, 33, 63, 34, 40, 41, 123, 125};

        // for (i = 0; arr[i] != '\0'; i++)
        // {
        // }

        for (i = 0; str[i] != '\0'; i++)
        {
                if ((str[i] > 96 || str[i] < 123))
                {

                }
                for (j = 0; arr[j] != '\0'; j++)
                {
                    if (str[i] == arr[j])
                    {
                        str[i+1] -= 32;
                    }
                }
        }

        return str;
        
        
}