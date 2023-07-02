#include <stdio.h>

#define ARRAY_SIZE 1000000

void populateArray(int* arr)
{
    for (int i = 0; i < ARRAY_SIZE; i++)
    {
        arr[i] = i + 1;
    }
}

long long calculateSum(const int* arr)
{
    long long sum = 0;
    for (int i = 0; i < ARRAY_SIZE; i++)
    {
        sum += arr[i];
    }
    return sum;
}

int main()
{
    int largeArray[ARRAY_SIZE]; // Statically allocated array on the stack

    populateArray(largeArray); // Populate the array with values

    long long sum = calculateSum(largeArray); // Calculate the sum

    printf("Sum of elements: %lld\n", sum);

    return 0;
}
