#include <stdio.h>

void set_string(char **s, char *to)
{
    *s = to;
}

int main()
{
    char *s0 = "Bob";
    // char *s1 = "Robert";
    char *s2 = NULL;

    // printf("%s, %s\n", s0, s1);
    set_string(&s0, s2);
    printf("%s, %s\n", s0, s2);
    return (0);

    return (0);
}