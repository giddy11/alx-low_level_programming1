#include <stdio.h>
#include <stdlib.h>

#define ARRAY_SIZE 1000000

int main()
{
    // Allocate a large array dynamically on the heap
    int* largeArray = (int*)malloc(ARRAY_SIZE * sizeof(int));

    if (largeArray == NULL)
    {
        printf("Memory allocation failed.\n");
        return 1;
    }

    // Populate the array with some values
    for (int i = 0; i < ARRAY_SIZE; i++)
    {
        largeArray[i] = i + 1;
    }

    // Perform some operations on the large array
    long long sum = 0;
    for (int i = 0; i < ARRAY_SIZE; i++)
    {
        sum += largeArray[i];
    }

    // Print the sum
    printf("Sum of elements: %lld\n", sum);

    // Free the allocated memory
    free(largeArray);

    return 0;
}
