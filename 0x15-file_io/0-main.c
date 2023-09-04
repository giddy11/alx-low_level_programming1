#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <string.h>
#include <ctype.h>

ssize_t read_textfile(const char *filename, size_t letters)
{
    
    FILE *fp = fopen(filename, "r");

    char *buff = malloc(sizeof(char) * letters);

    while(fgets(buff, letters, fp) != NULL)
    {
        printf
    }

    return (0);
}










int main(int ac, char **av)
{
    ssize_t n;
    
    if (ac != 2)
    {
        dprintf(2, "Usage: %s filename\n", av[0]);
        exit(1);
    }
    n = read_textfile(av[1], 114);
    printf("\n(printed chars: %li)\n", n);
    n = read_textfile(av[1], 1024);
    printf("\n(printed chars: %li)\n", n);
    return (0);
}
