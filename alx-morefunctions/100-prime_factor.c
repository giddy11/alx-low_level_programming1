#include <stdio.h>
// #include <stdlib.h>
#include <math.h>

int main(void) {
    // long long number = 612852475143;
    // long long largest_factor = 1;
    
    // // Divide by 2 as many times as possible
    // while (number % 2 == 0) {
    //     largest_factor = 2;
    //     number /= 2;
    // }
    
    // // Check odd numbers up to sqrt(number)
    // for (long long i = 3; i <= sqrt(number); i += 2) {
    //     while (number % i == 0) {
    //         largest_factor = i;
    //         number /= i;
    //     }
    // }
    
    // // Handle the case where number is itself a prime number
    // if (number > 2) {
    //     largest_factor = number;
    // }
    
    // printf("%lld\n", largest_factor);
    
    // return 0;

    int c;
	long long num = 612852475143;

	for (c = (int) sqrt(num); c > 2; c++)
	{
		if (num % c == 0)
		{
			printf("%d\n", c);
			break;
		}
	}

	return (0);
}
