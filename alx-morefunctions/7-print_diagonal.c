#include <stdio.h>

/**
 * print_diagonal - draw a diagonal line
 * @n: number of times the '\' char is printed
 * Description: Can only use _putchar to print
 */
void print_diagonal(int n)
{
	int c, i;

	c = 0;

	while (n > 0)
	{
		i = c;
		while (i > 0)
		{
			putchar(32);
			i--;
		}
		putchar(92);
		putchar(10);
		c++;
		n--;
	}
	if (c < 1)
		putchar(10);
}

int main()
{
    print_diagonal(5);
}