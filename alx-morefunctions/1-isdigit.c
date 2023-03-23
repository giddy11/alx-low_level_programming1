#include <stdio.h>

/**
 * _isdigit - a function that checks for a digit
 * @c: a variable that stores digits
 * Return: Return 1 if c is a digit and 0 otherwise
 */

int _isdigit(int c) 
{
    return c >= '0' && c <= '9';
}


int main()
{
    char c;

    c = '0';
    printf("%c: %d\n", c, _isdigit(c));
    c = 'a';
    printf("%c: %d\n", c, _isdigit(c));
    return (0);
}