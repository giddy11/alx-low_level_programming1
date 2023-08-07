#include <stdio.h>
#include <stdlib.h>


/**
 * check if null and treat as empty string
 * Get the length of the 2 strings (using strlen function)
 * add both length together and store in a variable called total
 * create a pointer to the heap that has the total length including
 * 1 additional byte for null termination
 * return NULL if the pointer in the heap returned a failure
 * copy string1 to the pointer in the heap (strcpy function)
 * concatenate string2 to the pointer in the heap (strcat function)
 * return pointer
*/

int _strlen(char *s)
{
    int i;
    for (i = 0; s[i] != '\0'; i++)
    {
    }
    return i;
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

char *str_concat(char *s1, char *s2)
{
    if (s1 == NULL)
        s1 = "";
    if (s2 == NULL)
        s2 = "";

    int len1 = _strlen(s1);
    int len2 = _strlen(s2);
    int total_len = len1 + len2;

    char *ptr = malloc((total_len + 1) * sizeof(char));

    if (ptr == NULL) 
        return NULL;

    _strcpy(ptr, s1);
    _strcat(ptr, s2);

    return ptr;
}

int main(void)
{ 
    char *s;

    s = str_concat(NULL, "Holberton");
    if (s == NULL)
    {
        printf("failed\n");
        return 1;
    }

    printf("%s\n", s);
    free(s);
    return 0;
}
