#include <stdio.h>
#include <stdlib.h>


int main()
{
    int **array = malloc(3 * sizeof(int* ));

    for (int i = 0; i < 3; i++)
    {
        array[i] = malloc(3 * sizeof(int));

        // if (grid[i] == NULL)
        // {
        //     // Memory allocation failed, free previously allocated memory and return NULL
        //     for (int j = 0; j < i; j++)
        //     {
        //         free(grid[j]); // free the columns
        //     }
        //     free(grid); // free the rows
        //     return NULL;
        // }

        // Initialize elements to 0
        for (int j = 0; j < 3; j++)
        {
            array[i][j] = 0;
            printf("%d", array[i][j]);
        }
        printf("\n");
    }

    // printf("Array[1][2] = %d\n", array[1][2]);



    return (0);
}