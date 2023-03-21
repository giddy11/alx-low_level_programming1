#include <stdio.h>
#include <string.h>

/**
 * Difference between function declaration and function prototype
 * Always declare the function first at the top so the compiler doesnt assumes the function
 * to be returning int
*/


void albert(char* name)
{
    int i = strlen(name);
    printf("%s consists of %d chars!\n", name, i);
}

int einstein(char* name)
{
    int i = strlen(name);
    albert(name);
    return(i);
}

int main(void)
{
    int i = einstein("Alice");
    printf("einstein has IQ=%d\n", i);
}