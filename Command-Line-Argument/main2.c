#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char* argv[])
{
    int i;

    if (argc == 3)
    {
        for (i = 1; i < argc - 1; i++)
        {
            int user = strcmp(argv[i], "gideon");
            int password = strcmp(argv[i+1], "7391");

            if ( user== 0 && password == 0)
            {
                printf("Welcome %s, Your password is %s\n", argv[i], argv[i+1]);
                return 0;
            }
        }
    }

    printf("Wrong user\n");

    return (0);
}