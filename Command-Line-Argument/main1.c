#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char* argv[])
{
    int i, sum = 0;
    printf("argc = %d\n", argc);
    printf("Let's see what is in argv[]\n");

    for (i = 1; i < argc; i++)
    {
        printf("argv[%d] = %s\n", i, argv[i]);
        sum = sum + atoi(argv[i]);
    }

    printf("The sum is : %d\n", sum);
    

    return (0);
}