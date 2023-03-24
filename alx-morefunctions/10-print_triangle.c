#include <stdio.h>

void print_shape(int size) 
{
    // if (size <= 0) {
    //     putchar('\n');
    //     return;
    // }
    
    // for (int i = 1; i <= size; i++) {
    //     for (int j = 1; j <= i; j++) {
    //         putchar('#');
    //     }
    //     putchar('\n');
    // }

    if (size <= 0) 
    {
        putchar('\n');
        return;
    }

    for (int i = 1; i <= size; i++) 
    {
        for (int j = 1; j <= size - i; j++) 
        {
            putchar(' ');
        }
        for (int k = 1; k <= i; k++) 
        {
            putchar('#');
        }
        putchar('\n');
    }
}

int main()
{
    print_shape(10);
}