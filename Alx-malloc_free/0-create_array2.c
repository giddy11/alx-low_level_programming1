#include <stdio.h>

void simple_print_buffer(char *arr, unsigned int size)
{
    unsigned int i;

    i = 0;
    while (i < size)
    {
        if (i % 10)
        {
            printf(" ");
        }
        if (!(i % 10) && i)
        {
            printf("\n");
        }
        printf("0x%02x", arr[i]);
        i++;
    }
    printf("\n");
}

int main(void)
{
    char *buffer;
    int size = 2;
    char c = 'H';
    buffer = &c;

    char arr[size]; 
    arr[0] = c;
    arr[1] = c;


    simple_print_buffer(arr, 2);

    return (0);
}