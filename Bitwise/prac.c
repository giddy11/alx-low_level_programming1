#include <stdio.h>

/**
 * _strlen - returns new length of string
 * @s: the string (const)
 * Return: length of string
 */
int _strlen(const char *s)
{
	int len = 0;

    for (; s[len] != 0; len++)
        ;

	return (len);
}

/**
 * power - exponents
 * @base: base
 * @exp: exponent
 * Return: result (int)
 */
int power(int base, int exp)
{
	int i, num;

	num = 1;
	for (i = 0; i < exp; ++i)
		num *= base;

	return (num);
}

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: binary number
 * Return: unsigned int
 */
unsigned int binary_to_uint(const char *b)
{
    unsigned int sum;
    int length, i;
    sum = 0;

    if (b == NULL)
        return (0);

    length = _strlen(b);

    for (i = 0; i < length; i++)
    {
        if (b[i] != '0' && b[i] != '1')
            return 0;
        
        sum += (b[i] - '0') * power(2, length - i - 1);
    }

    return (sum);
}

int main(void)
{
    unsigned int n;

    n = binary_to_uint("1");
    printf("%u\n", n);
    n = binary_to_uint("101");
    printf("%u\n", n);
    n = binary_to_uint("1e01");
    printf("%u\n", n);
    n = binary_to_uint("1100010");
    printf("%u\n", n);
    n = binary_to_uint("0000000000000000000110010010");
    printf("%u\n", n);
    return (0);
}