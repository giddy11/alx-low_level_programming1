#include <stdio.h>

int main()
{
    int a, b;


    for (a = 0; a < 9; a++)
    {
        for (b = a + 1; b <= 9; b++)
        {
            putchar((a % 10) + '0');
            putchar((b % 10) + '0');
            if( a == 8 && b == 9)
            {
                continue;
            }
            putchar(',');
            putchar(' ');
        }
    }
    putchar('\n');
    return (0);

}

/*putchar(a);
        if (a == '8')
        continue;
        putchar(',');
        putchar(' ');*/