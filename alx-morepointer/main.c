#include "main.h"
#include <stdio.h>

char *strcopy(char *dest, char *src)
{
    char temp[50];
    int i, j;

    for (i = 0; src[i] != '\0'; i++)
    {
        
    }

    for (j = 0; dest[j] != '\0'; j++)
    {
        src[i] = dest[j];
    }

    return src;
    
}

int main(void)
{
    char s1[30] = "Hello World";
    char *ptr;

    ptr = strcopy(s1, "How are you\n");

    printf("%s", ptr);



    return (0);
}