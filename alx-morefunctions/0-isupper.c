#include <stdio.h>

/**
 * _isupper - a function that checks for uppercase characters
 * @c: a variable that stores the letters
 * Return: Return 1 if c is uppercase and 0 otherwise
 */

int _isLower(int c)
{
    if (c >= 'a' && c <= 'z')
    {
        return (0);
    }
    else
    {
        return (1);
    }
}


int main()
{
    printf("%d", _isLower('H'));

}