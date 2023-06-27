#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    int myrand;
	int count;
	int total;

	srand(time(NULL));
	for (count = 0, total = 2772; total > 122; count++)
	{
		myrand = (rand() % 125) + 1;
		printf("%c", myrand);
		total -= myrand;
	}
	printf("%c", total);

	return (0);















	// int pass[100];
    // int i, sum, n;

    // sum = 0;

    // srand(time(NULL));

    // for (i = 0; i < 20; i++)
    // {
    //     pass[i] = rand() % 70;
    //     sum += pass[i] + '0';
    //     putchar(pass[i] + '0');

    //     if ((2772 - sum) - '0' < 70)
    //     {
    //         n = 2772 - sum - '0';
    //         sum += n;
    //         putchar(n + '0');
    //         break;
    //     }
        
    // }

	// return (0);
}