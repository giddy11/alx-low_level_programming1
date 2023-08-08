#include "main.h"
#include <stdlib.h>

/**
 * free2DIntArray - a function that frees the memory.
 * @grid: an array of array pointer
 * @height: the row of the array
 */
void free2DIntArray(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]); // free the columns

	free(grid); // free the rows
}

/**
 * alloc_grid - a function that returns a pointer to a 2 dimensional
 * array of integers
 * Description: Each element of the grid should be initialized to 0.
 * @width: int size width
 * @height: int size height
 * Return: Pointer to new grid
 */
int **alloc_grid(int width, int height)
{
	int i, j, **grid;

	if (width <= 0 || height <= 0)
		return (NULL);

    /**
     * This uses the malloc function to dynamically allocate memory for the array of 
     * pointers (rows or 1D) in the two-dimensional array. 
     **/ 
	grid = malloc(height * sizeof(int *));

    // Memory allocation failed, return NULL or insufficient memory
	if (grid == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(width * sizeof(int));

		if (grid[i] == NULL)
		{
            // Memory allocation failed, free previously allocated memory and return NULL
			free2DIntArray(grid, height);
			return (NULL);
		}

		for (j = 0; j < width; j++)
		{
			grid[i][j] = 0;
		}
	}

	return (grid);
}

/**
 * print_grid - prints a grid of integers
 * @grid: the address of the two dimensional grid
 * @width: width of the grid
 * @height: height of the grid
 *
 * Return: Nothing.
 */
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

    grid = alloc_grid(6, 4);
    if (grid == NULL)
    {
        return (1);
    }
    print_grid(grid, 6, 4);
    printf("\n");
    grid[0][3] = 98;
    grid[3][4] = 402;
    print_grid(grid, 6, 4);
    return (0);
}