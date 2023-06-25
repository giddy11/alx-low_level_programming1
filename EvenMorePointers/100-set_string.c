#include <stdio.h>

void set_string(char **s, char *to)
{
    int i, j;

    for (i = 0; s[i] != 0; i++)
    {
        printf("%s", s[i]);
    }
}

int main()
{
    // char *s0 = "Bob Dylan";
    // char *s1 = "Robert Allen";
    char *s0 = "Bob";
    char *s1 = "Robert";

    // printf("%s, %s\n", s0, s1);
    set_string(&s1, s0);
    printf("%s, %s\n", s0, s1);
    return (0);

    return (0);
}