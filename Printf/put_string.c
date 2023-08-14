#include "main.h"

int put_string(char *str)
{
    int i, r_value;
    if(str)
    {
        for (i = 0; i < str[i] != 0; i++, r_value++)
        {
            my_putchar(str[i]);
        }
    }
    

    return r_value;
}