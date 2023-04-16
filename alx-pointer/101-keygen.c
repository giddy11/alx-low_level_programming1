#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    int i;
    srand(time(NULL));

    for (i = 0; i < 50; i++)
    {
        int k = rand() % 128;
        if ((k >= 48 && k <= 57) || (k >= 65 && k <= 90) || (k >= 97 && k <= 122) || (k >= 58 && k <= 64))
        {
            printf("%c", k);
        }
        else
        {
            i--;
        }
    }
    printf("\n");

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