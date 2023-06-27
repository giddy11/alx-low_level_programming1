#include <stdio.h>

void _puts_recursion(char *s)
{
    if (*s == 0)
        return;

    putchar(*s);
        _puts_recursion(++s);
}

int main(void)
{
    _puts_recursion("Putsavg dwydgwtydu wygdygwgyh dwvgdygw");
    return (0);
}