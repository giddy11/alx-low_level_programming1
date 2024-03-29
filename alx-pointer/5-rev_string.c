#include "main.h"

/**
 * rev_string - a function that reverses a string.
 *
 * @s: char pointer var
 *
 * Return: nothing
 */

void rev_string(char *s)
{
    int i, j;
    char c;

    i = 0;

    while (s[i] != '\0')
    {
        i++;
    }


    j = i - 1;
    i = 0;

    while (i < j)
    {
        c = s[j];
        s[j] = s[i];
        s[i] = c;

        j--;
        i++;
    }    
}

/*
s = my school 
i = 0
j = 9-0
while i < j
0   c = l; l = 0; 0 = c*/