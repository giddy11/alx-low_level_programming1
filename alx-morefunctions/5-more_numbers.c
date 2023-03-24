#include <stdio.h>


void more_numbers(void)
{
	int c, i;

	c = 0;
	while (c < 10)
	{
		i = 0;
		while (i < 15)
		{
			if (i > 9)
				putchar(i / 10 + '0');

			putchar(i % 10 + '0');
			i++;
		}
		c++;
		putchar(10);
	}
}
int main()
{
    more_numbers();
}