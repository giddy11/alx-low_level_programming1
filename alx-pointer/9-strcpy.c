#include "main.h"

/**
 * _strcpy - a function that copies the string pointed to by src,
 * including the terminating null byte (\0), to the buffer
 *
 * @src: char pointer variable
 * @dest: char pointer variable
 *
 * Return: a sequence of characters
 */

char *_strcpy(char *dest, char *src)
{
    int i;
    i = 0;

    while (src[i] != '\0')
    {
       dest[i] = src[i];
       i++;
    }
    dest[i] = '\0';

    return dest;   
}