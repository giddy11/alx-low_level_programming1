#include <stdio.h>


/**
 * get_endianness - Checks the endianness.
 *
 * Return: If big-endian - 0.
 *         If little-endian - 1.
 */
int get_endianness(void)
{

	int num;
    scanf("%d", &num);
    
	char *endian = (char *)&num;

	if (*endian == 1)
		return (1);

	return (0);
}

int main(void)
{
    int n;

    n = get_endianness();
    if (n != 0)
    {
        printf("Little Endian\n");
    }
    else
    {
        printf("Big Endian\n");
    }
    return (0);
}