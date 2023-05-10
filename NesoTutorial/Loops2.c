#include <stdio.h>

// How many times will this be printed in below

/**
 * 
*/

int main()
{
    unsigned int i = 4294967290;

    while(++i != 0);
    printf("%d", i);
    
    return (0);
}