#include <stdio.h>

void _puts_recursion(char *s)
{
    if (*s == 0)
        return;

    _puts_recursion(s+1);
    putchar(*s);
}

int main(void)
{
    _puts_recursion("Puts");
    return (0);
}