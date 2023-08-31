#include <stdio.h>

/**
 * get_bit - a func that the value of a bit at any given index
 * @n: an integer
 * @index: given index
 * Return: the value at index or -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= (sizeof(n) * 8))
		return (-1);

	return ((n >> index) & 1);
}



/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    int n;

    n = get_bit(1024, 10);
    printf("%d\n", n);
    // n = get_bit(98, 0);
    // printf("%d\n", n);
    // n = get_bit(1024, 0);
    // printf("%d\n", n);
    return (0);
}