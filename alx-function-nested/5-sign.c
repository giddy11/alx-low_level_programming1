#include <stdio.h>

int print_sign(int n) {
    if (n > 0) {
        putchar('+');
        return 1;
    } else if (n == 0) {
        putchar('0');
        return 0;
    } else {
        putchar('-');
        return -1;
    }
}

int main()
{
    int r;

    r = print_sign(98);
    putchar(',');
    putchar(' ');
    putchar(r + '0');
    putchar('\n');
}
