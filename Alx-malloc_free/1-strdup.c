#include <stdio.h>
#include <stdlib.h>

int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
	}
	return (i);
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

	return (dest);
}

char *_strdup(char* str)
{
    if (str == NULL)
        return NULL;

    int len = _strlen(str);
    char* ptr = malloc((len + 1) * sizeof(char));

    if (ptr == NULL)
        return (NULL);

    _strcpy(ptr, str);

    return (ptr);
}

#include <stdio.h>
#include <stdlib.h>


int main(void)
{
    char *s;

    s = _strdup("ALX SE");
    if (s == NULL)
    {
        printf("failed to allocate memory\n");
        return (1);
    }
    printf("%s\n", s);
    free(s);
    return (0);
}