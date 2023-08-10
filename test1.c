#include <stdio.h>
#include <stdlib.h>

void free2DIntArray(int **grid, int height)
{
    int i;

    for (i = 0; i < height; i++)
        free(grid[i]);

    free(grid);
}


int **alloc_grid(int width, int height)
{
    int **grid, row, col;

    if (width <= 0 || height <= 0)
        return NULL;

    grid = malloc(height * sizeof(int *));
    if (grid == NULL)
        return NULL;

    for (row = 0; row < height; row++)
    {
        grid[row] = malloc(width * sizeof(int ));

            // if (grid[row] == NULL)
            // {
            //     free2DIntArray(grid, height);
            //     return NULL;
            // }

            if (grid[row] == NULL)
            {
                for (row = 0; row < height; row++)
                {
                    free(grid[row]);
                }
                free(grid);
                return NULL;
            }

            for (col = 0; col < width; col++)
                grid[row][col] = 0;
    }

    return grid;
}

void print_grid(int **grid, int width, int height)
{
    int w;
    int h;

    h = 0;
    while (h < height)
    {
        w = 0;
        while (w < width)
        {
            printf("%d ", grid[h][w]);
            w++;
        }
        printf("\n");
        h++;
    }   
}

/**
 * main - check the code for ALX School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    int **grid;

    grid = alloc_grid(6, 0);
    if (grid == NULL)
    {
        printf("Failed");
        return (1);
    }
    // print_grid(grid, 6, 0);
    // printf("\n");
    // grid[3][5] = 10;
    // // grid[3][4] = 402;
    // print_grid(grid, 6, 0);\
    // // free_grid(grid, 4);
    // // free2DIntArray(grid, 4);
    return (0);
}