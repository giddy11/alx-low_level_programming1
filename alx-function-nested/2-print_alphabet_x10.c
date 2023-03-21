#include <stdio.h>


int main()
{
    char j;
    int i;

    i = 0;

    while (i < 10)
    {
        j = 'a';
        while (j <= 'z')
        {
            putchar(j);
            j++;
        }
        putchar('\n');
        i++;   
    }   
}