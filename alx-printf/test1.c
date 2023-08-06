#include <stdio.h>
#include <stdlib.h>


int main()
{    
    char *s = "Hello world.";
    char **ptr = &s;
    char ***ptr1 = &ptr;


    printf("s: %p\n", s);
    printf("ptr: %p\n\n", *ptr);
    printf("ptr1: %p\n\n", *ptr);


    printf("s: %s\n", s);
    printf("ptr: %c\n", *(ptr+1));

    return (0);
}