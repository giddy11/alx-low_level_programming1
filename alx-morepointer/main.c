#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */

void print_buffer(char *b, int size)
{
    int i, j, k;
    char c;

    if (size <= 0)
    {
        printf("\n");
        return;
    }

    for(i = 0; i < size; i += 10)
    {
        printf("%08x: ", i);
        for(j = 0, k = 2; j < 10 && i + j < size; j++, k++)
        {
            // c = b[i+j];
            // printf("%02x ", c);
            c = b[i+j];
            printf("%02x", c);
            if (k % 2 == 1) 
            {
                printf(" ");
            }
            
        }

        for(; j < 10; j++)
        {
            printf("   ");
        }
        printf(" ");

        for(j = 0; j < 10 && i+j < size; j++)
        {
            c = b[i+j];
            if(c >= 32 && c <= 126)
                printf("%c", c);
            else
                printf(".");
        }
        printf("\n");
    }
}

int main(void)
{
    // char buffer[] = "This is a string!\0And this is the rest of the #buffer :)\1\2\3\4\5\6\7#cisfun\n\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\x20\x21\x34\x56#pointersarefun #infernumisfun\n";
    char buffer[] = "This is a string";
        // char buffer[] = "This is not suppose\7";


//     printf("%s\n", buffer);
//     printf("---------------------------------\n");
    print_buffer(buffer, sizeof(buffer));
    return (0);
}