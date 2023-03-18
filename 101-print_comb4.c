#include <stdio.h>

int main()
{
    int a, b, c;

    for ( c = 0; c < 8; c++)
    {
        for (a = 0; a < 9; a++)
    {
        for (b = a + 1; b <= 9; b++)
        {
            putchar((c % 10) + '0');
            putchar((a % 10) + '0');
            putchar((b % 10) + '0');
            if( a == 8 && b == 9 && c == 7)
            {
                continue;
            }
            putchar(',');
            putchar(' ');
        }
    }
    }
    
    
    putchar('\n');
    return (0);

}