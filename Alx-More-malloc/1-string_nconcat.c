#include <stdio.h>
#include <stdlib.h>

/**
 * _strlen -  function that returns the length of a string
 *
 * @s: char type pointer
 *
 * Return: string length of a string
 */
int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
	}

	return (i);
}


/**
 * string_nconcat - a function that concatenates two strings.
 * @s1: first string
 * @s2: second string
 * @n: number of bytes
 * Return: a pointer char
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int len1 = 0, len2 = 0, i, j;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	len1 = _strlen(s1);
	len2 = _strlen(s2);

	n = (n > len2) ? len2 : n;

	ptr = malloc((len1 + n + 1) * sizeof(char));

	for (i = 0; i < len1; i++)
	{
		ptr[i] = s1[i];
	}

	for (j = 0; j < n; j++, i++)
	{
		ptr[i] = s2[j];
	}
	ptr[i] = '\0';

	return (ptr);
}


int main()
{
    char *concat;
    
    concat = string_nconcat("Best ", "School !!!", 30);

    printf("%s\n", concat);



    free(concat);

    return (0);
}