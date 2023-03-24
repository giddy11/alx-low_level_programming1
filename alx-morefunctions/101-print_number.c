#include <stdio.h>

void print_number(int n) {
    int divisor = 1;
    
    // Handle negative numbers
    if (n < 0) {
        putchar('-');
        n = -n;
    }
    
    // Find the divisor that gives the first digit of n
    while (n / divisor >= 10) {
        divisor *= 10;
    }
    
    // Print each digit of n
    while (divisor != 0) {
        putchar('0' + (n / divisor));
        n %= divisor;
        divisor /= 10;
    }
}

int main()
{
    print_number(0);
}
