#include <stdio.h>
#include <stdlib.h>

int _strlen(char *s)
{
    int i;
    for (i = 0; s[i] != '\0'; i++)
    {
    }
    return i;
}

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

char *_strcat(char *dest, char *src)
{
    int i, j;

    for (i = 0; dest[i] != '\0'; i++)
    {
    }

    for (j = 0; src[j] != '\0'; j++, i++)
    {
        dest[i] = src[j];
    }

    dest[i] = '\0';

    return dest;
}

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
	{
	}

	for (j = 0; src[j] != '\0' && n > 0; j++)
	{
		dest[i] = src[j];
		n--;
		i++;
	}

	return (dest);
}

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
    if (s1 == NULL)
        s1 = "";
    if (s2 == NULL)
        s2 = "";

    int length1 = _strlen(s1);
    int length2 = _strlen(s2);
    int total_length = length1 + length2;

    if (n >= length2)
    {
        char *ptr = malloc(total_length * sizeof(char));

        _strcpy(ptr, s1);
        _strcat(ptr, s2);

        return ptr;
    }
    else
    {
        char *ptr = malloc((length1 + n) * sizeof(char));

        _strcpy(ptr, s1);
        _strncat(ptr, s2, n);

        return ptr;


    }


}


int main()
{
    char *concat;
    
    concat = string_nconcat("Best ", "School yes!!", 55);

    printf("%s\n", concat);



    free(concat);

    return (0);
}