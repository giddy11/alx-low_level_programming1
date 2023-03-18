#include <stdio.h>

int main()
{
    int a, b;


    for (a = '0'; a < '9'; a++)
    {
        for (b = '0' + 1; b <= '9'; b++)
        {

            putchar(a);
            putchar(b);
            putchar(',');
            putchar(' ');
        }
    }
    return (0);

}

/*putchar(a);
        if (a == '8')
        continue;
        putchar(',');
        putchar(' ');*/