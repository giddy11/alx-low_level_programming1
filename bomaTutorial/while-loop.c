#include <stdio.h>

/**
 * print all even numbers from 1 - 10
 * 1 2 3 4 5 6 7 8 9 10
 * Loops- 
 * While loop
*/

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