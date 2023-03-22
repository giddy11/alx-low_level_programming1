#include <stdio.h>

void times_table(void) {
    int i, j;

    for (i = 0; i <= 9; i++) {
        for (j = 0; j <= 9; j++) {
            int product = i * j;
            if (product < 10) {
                putchar(' ');
                putchar(' ');
                putchar(product + '0');
            } else if (product < 100) {
                putchar(' ');
                putchar(product / 10 + '0');
                putchar(product % 10 + '0');
            } else {
                putchar(product / 100 + '0');
                putchar(product / 10 % 10 + '0');
                putchar(product % 10 + '0');
            }
            if (j < 9) {
                putchar(',');
                putchar(' ');
            }
        }
        putchar('$');
        putchar('\n');
    }
}


int main()
{
    times_table();
}