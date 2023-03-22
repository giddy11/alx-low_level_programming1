#include <stdio.h>

void print_times_table(int n) {
    int i, j;

    for (i = 0; i <= n; i++) {
        for (j = 0; j <= n; j++) {
            int product = i * j;
            if (product < 10) {
                putchar(' ');
                putchar(' ');
                putchar(product + '0');
            } else if (product < 100) {
                putchar(' ');
                putchar(product / 10 + '0');
                putchar(product % 10 + '0');
            }
            // } else if (product != 0)
            // {
            //     putchar(' ');
            //     putchar(' ');                
            //     putchar(product + '0');                
            // }
            else {
                putchar(product / 100 + '0');
                putchar(product / 10 % 10 + '0');
                putchar(product % 10 + '0');
            }
            if (j < n) {
                putchar(',');
                putchar(' ');
            }
        }
        // putchar('$');
        putchar('\n');
    }
}


int main()
{
    print_times_table(50);
    // return (0);
}