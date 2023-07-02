#include <stdio.h>
#include <stdlib.h>

char* create_string(int len, char c)
{
    char *s;
    int i;

    s = malloc((len + 1) * sizeof(char));
    printf("Address of s: %p\n", s);

    if (s == NULL)
    {
        printf("Not enough memory allocated");
        return (NULL);
    }
    
    i = 0;
    while (i < len)
    {
        s[i] = c;
        i++;
    }
    s[i] = '\0';
    return (s);
}

int main()
{
    char* s;

    s = create_string(5, 'H');

    printf("%s\n", s);

    free(s);
    
    return (0);
}