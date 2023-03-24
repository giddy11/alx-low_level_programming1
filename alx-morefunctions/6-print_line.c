#include <stdio.h>

/**
 * print_line - draw a straight line
 * @n: number of times underscore is printed
 * Description: Can only use _putchar to print
 */
void print_line(int n)
{
	int c;

	// c = 0;
	// while (c < n)
	// {
	// 	putchar(95);

	// 	c++;
	// }
    for (c = 0; c < n; c++)
    {
        putchar(95);
    }    
	putchar(10);
}

int main()
{
    print_line(5);
}