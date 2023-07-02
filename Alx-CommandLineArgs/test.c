#include <stdio.h>

int calculateMinCoins(int cents) {
    if (cents < 0) {
        return 0;
    }

    int coins[] = {25, 10, 5, 2, 1};
    int numCoins = sizeof(coins) / sizeof(coins[0]);
    int count = 0;

    for (int i = 0; i < numCoins; i++)
    {
        count += cents / coins[i];
        cents %= coins[i];
    }

    return count;
}

int main()
{
    int cou = calculateMinCoins(1);

    printf("%d\n", cou);

    return (0);
}