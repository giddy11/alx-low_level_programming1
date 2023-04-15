#include <stdio.h>

int main()
{
    int n;
    int *ptr;

    printf("Size of type 'char' on my computer: %lu bytes\n", sizeof(char));
    printf("Size of type 'int' on my computer: %lu bytes\n", sizeof(int));
    printf("Size of type 'float' on my computer: %lu bytes\n", sizeof(float));
    printf("Size of type of my variable n on my computer: %lu bytes\n", sizeof(n));
    printf("Size of type 'ptr' on my computer: %lu bytes\n", sizeof(ptr));

    return (0);
}