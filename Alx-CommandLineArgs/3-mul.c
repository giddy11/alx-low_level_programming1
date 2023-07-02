#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int i, result = 1;

    if (argc == 3)
    {
        for (i = 1; i < argc; i++)
        {
            int x = atoi(argv[i]);
            result = result * x;
        }
        printf("%d\n", result);
    }
    else
    {
        printf("Error\n");
        return (1);
    }
    
    return (0);
}