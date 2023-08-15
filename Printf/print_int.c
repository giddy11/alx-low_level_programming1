#include "main.h"

int print_int(int num)
{
    int n;

	/* Handle negative numbers*/
	if (num < 0)
	{
		my_putchar('-');
		num = -num;
	}

    if (num == 0)
        return 0;

    n = num / 10;

    int count = print_int(n);
    // count += my_putchar(num % 10 + '0');
    return count +  my_putchar(num % 10 + '0');


    // return count;
}

void print1_int(int num)
{
	int n;

	if (num == 0)
		return;

	n = num / 10;

	print1_int(n);
	my_putchar(num % 10 + '0');

	return;
}



// void print_int1(int n)
// {
// 	int divisor;

// 	divisor = 1;

// 	/* Handle negative numbers*/
// 	if (n < 0)
// 	{
// 		my_putchar('-');
// 		n = -n;
// 	}

// 	/* Find the divisor that gives the first digit of n*/
// 	while (n / divisor >= 10)
// 	{
// 		divisor *= 10;
// 	}

// 	/* Print each digit of n*/
// 	while (divisor != 0)
// 	{
// 		my_putchar('0' + (n / divisor));
// 		n %= divisor;
// 		divisor /= 10;
// 	}

// }



// char buffer[20]; // Assume a reasonable buffer size
    // int length = 0;

    // // Convert the integer to a string
    // if (num == 0) {
    //     buffer[length++] = '0';
    // } else {
    //     int isNegative = 0;
    //     if (num < 0) {
    //         isNegative = 1;
    //         num = -num;
    //     }

    //     while (num > 0) {
    //         buffer[length++] = '0' + (num % 10);
    //         num /= 10;
    //     }

    //     if (isNegative) {
    //         buffer[length++] = '-';
    //     }

    //     // Reverse the string in place
    //     for (int i = 0; i < length / 2; i++) {
    //         char temp = buffer[i];
    //         buffer[i] = buffer[length - 1 - i];
    //         buffer[length - 1 - i] = temp;
    //     }
    // }

    // // Write the string to standard output
    // for (int i = 0; i < length; i++) {
    //     my_putchar(buffer[i]);
    // }

    // return length;