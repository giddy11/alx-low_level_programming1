#include <stdio.h>

/**
 * get_bit - a func that the value of a bit at any given index
 * @n: an integer
 * @index: given index
 * Return: the value at index or -1 if an error occured
 */
// int get_bit(unsigned long int n, unsigned int index)
// {
// 	if (index >= (sizeof(n) * 8))
// 		return (-1);

// 	return ((n >> index) & 1);
// }



int main(void)
{
    // print_binary(0);
    // printf("\n");
    // print_binary(1);
    // printf("\n");
    print_binary(98);
    printf("\n");
    print_binary(1024);
    printf("\n");
    print_binary((1 << 10) + 1);
    printf("\n");
    return (0);
}