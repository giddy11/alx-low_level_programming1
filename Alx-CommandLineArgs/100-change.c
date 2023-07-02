#include <stdio.h>
#include <stdlib.h>

int calculateMinCoins(int cents)
{
    int coins[] = {25, 10, 5, 2, 1};
    int numCoins = sizeof(coins) / sizeof(coins[0]);
    int count = 0;
    int i;

    for (i = 0; i < numCoins; i++)
    {
        count += cents / coins[i];
        cents %= coins[i];
    }

    return count;
}

int main(int argc, char* argv[])
{
    if (argc != 2)
    {
        printf("Error\n");
        return (1);
    }
    else
    {
        int cent = atoi(argv[1]);

        if (cent < 0)
            printf("0\n");
        
        else
        {
            int number_of_change = calculateMinCoins(cent);
            printf("%d\n", number_of_change);
        }
    }
    
    return (0);
}