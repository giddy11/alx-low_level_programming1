#include <stdio.h>
#include <string.h>
#include <unistd.h>

int _putchar(char c)
{
    static char buffer[1024]
    static int i;

    if (c == -1 || i >= 1024)
    {
        write(1, &buffer, i);
        i = 0;
    }


    return (1);
}






int main(void)
{
   
}