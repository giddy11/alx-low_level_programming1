#include <stdio.h>
#include <stdlib.h>

char* f(void)
{
    char *str = "Hello world";

    return (str);
}

int main()
{    
    char *s = f();

    printf("%s\n", *s);

    return (0);
}