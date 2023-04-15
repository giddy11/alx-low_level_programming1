#include <stdio.h>
#include "main.h"

/*
int StrLen(char *len)
{
    int i, count = 0;

    for (i = 0; len[i] != '\0'; i++)
    {
        count++;
    }
    return count;
}*/

void Print(char *c)
{
    int i;

    for (i = 0; c[i] != '\0'; i++)
    {
        printf("%c", c[i]);
    }
    // putchar(10);
}