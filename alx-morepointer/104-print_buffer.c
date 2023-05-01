#include "main.h"
#include <stdio.h>

/**
 * print_buffer - prints buffer
 * @b: buffer
 * @size: size
 * Return: void
 */

void print_buffer(char *b, int size)
{
    int i, j;
    char c;

    if (size <= 0)
    {
        printf("\n");
        return;
    }

    for(i = 0; i < size; i += 10)
    {
        printf("%08x: ", i);
        for(j = 0; j < 10 && i + j < size; j++)
        {
            c = b[i+j];
            printf("%02x ", c);
        }

        for(; j < 10; j++)
        {
            printf("   ");
        }
        printf(" ");

        for(j = 0; j < 10 && i+j < size; j++)
        {
            c = b[i+j];
            if(c >= 32 && c <= 127)
                printf("%c", c);
            else
                printf(".");
        }
        printf("\n");
    }
}