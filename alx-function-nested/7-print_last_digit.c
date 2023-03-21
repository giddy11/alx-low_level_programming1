#include <stdio.h>

int print_last_digit(int num) {
  int last_digit = num % 10;
  
  if (last_digit < 0) {  
    last_digit = -last_digit;
  }
  putchar(last_digit + '0');
  return last_digit;
}

int main()
{
    int r;

    print_last_digit(98);
    print_last_digit(0);
    r = print_last_digit(-1024);
    putchar('0' + r);
    putchar('\n');
    return (0);
}