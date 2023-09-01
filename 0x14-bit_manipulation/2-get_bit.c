#include <stdio.h>





int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= (sizeof(n) * 8))
		return (-1);

	return ((n >> index) & 1);
}

int main(void)
{
    int n, b;

    scanf("%d", &b);

    // n = get_bit(1024, 10);
    // printf("%d\n", n);
    n = get_bit(98, b);
    printf("%d\n", n);
    // n = get_bit(1024, 0);
    // printf("%d\n", n);
    return (0);
}