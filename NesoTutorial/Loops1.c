#include <stdio.h>

// How many times will this be printed in below

/**
 * i >>= 1
 * i = i >> 1
 * i = 1024
 * 
 * 1024 = 100 0000 0000
 * 512 = 010 0000 0000
 * 256 = 001 0000 0000
 * ********
 * *******
 * 1 = 000 0000 0001
 * 0 = 000 0000 0000
*/

int main()
{
    int i = 1024;

    for(; i; i >>= 1)
    {
        printf("Hello, World\n");
    }
    return (0);
}