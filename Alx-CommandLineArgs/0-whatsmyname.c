#include <stdio.h>

int main(int argc, char* argv[])
{
    printf("%s\n", *(argv));

    (void)argc;

    return (0);
}