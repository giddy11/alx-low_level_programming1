#include <stdio.h>
#include <stdlib.h>

int **alloc_grid(int width, int height)
{
    if (width <= 0 || height <= 0)
        return NULL;  // Invalid dimensions, return NULL

    int **grid = malloc(height * sizeof(int *));

    if (grid == NULL)
        return NULL;  // Memory allocation failed, return NULL

    for (int i = 0; i < height; i++)
    {
        grid[i] = malloc(width * sizeof(int));

        if (grid[i] == NULL)
        {
            // Memory allocation failed, free previously allocated memory and return NULL
            for (int j = 0; j < i; j++)
            {
                free(grid[j]);
            }
            free(grid);
            return NULL;
        }

        // Initialize elements to 0
        for (int j = 0; j < width; j++)
        {
            grid[i][j] = 0;
        }
    }

    return grid;
}

int main(void)
{
    int width = 14;
    int height = 13;

    int **grid = alloc_grid(width, height);
    if (grid == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    // Print the grid
    for (int i = 0; i < height; i++) {
        for (int j = 0; j < width; j++) {
            printf("%d ", grid[i][j]);
        }
        printf("\n");
    }

    // Free the allocated memory
    for (int i = 0; i < height; i++) {
        free(grid[i]);
    }
    free(grid);

    return 0;
}
