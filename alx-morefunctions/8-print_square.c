#include <stdio.h>

void print_shape(int size) 
{
    int a, b;
    if (size <= 0)
    {
        printf("\n");
    }
    for (a = 0; a < size; a++)
    {
        for (b = 0; b < size; b++)
        {
            printf("#");
        }
        printf("\n");
    }
}


void main()
{
    print_shape(-5);
}