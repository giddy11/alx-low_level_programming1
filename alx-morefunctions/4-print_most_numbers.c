#include "main.h"

/**
 * print_most_numbers - prints the numbers, from 0 to 9, followed by a new line
 * Return: nothing
 */

void print_most_numbers(void)
{
    int i;
    char num_char;

    for (i = 0; i < 10; i++)
    {
        if (i == 2 || i == 4)
        {
            continue;
        }
        num_char = i + '0';
        _putchar(num_char);
    }

    _putchar('\n');
}



int main(void)
{
    print_most_numbers();
    return (0);
}