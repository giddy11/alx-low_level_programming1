#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    if (argc == 1)
        printf("0\n");

    else
    {
        int i, j, result = 0;

        for (i = 1; i < argc; i++)
        {
            char *e = argv[i];
            for (j = 1; e[j] != 0; j++)
            {
                if (e[j] < 48 || e[j] > 57)
                {
                    printf("Error\n");
                    return (1);
                }
            }
            result = result + atoi(e);
        }
        printf("%d\n", result);
    }

    return (0);
}