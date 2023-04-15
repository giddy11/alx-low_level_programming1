#include "main.h"

char *_strcat(char *dest, char *src)
{
    int i, j;
    i = 0;
    j = 0;

    // while (dest[i] != '\0')
    // {
    //     i++;
    // }
    while (dest[i] != '\0')
    {
        i++;
    }
    i = 2;

    while (src[j] != '\0' )
    {
        dest[i] = src[j];
        j++;
        
    }

    // dest[i + j] = '\0';


    return dest;


}