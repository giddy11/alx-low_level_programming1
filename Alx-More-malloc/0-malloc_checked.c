#include <stdio.h>
#include <stdlib.h>

char *malloc_checked(unsigned int b)
{
    char *ptr;

    ptr = malloc(b);
    if (ptr == NULL)
        exit(98);

    return ptr;
}


int main()
{
    char *c;
    char *b;
    int *i;
    float *f;
    double *d;

    c = malloc_checked(1024 * sizeof(char));
    printf("c: %p\n", (void *)c);

    c = malloc_checked(1024 * sizeof(char));
    printf("c: %p\n", (void *)c);


    b = malloc_checked(1024 * sizeof(char));
    printf("b: %p\n", (void *)b);

    // i = malloc_checked(402 * sizeof(int));
    // printf("i: %p\n", (void *)i);

    // f = malloc_checked(1000000000 * sizeof(float));
    // printf("f: %p\n", (void *)f);

    // d = malloc_checked(__INT_MAX__);
    // printf("d: %p\n", (void *)d);

    free(c);
    free(i);
    free(f);
    free(d);

    return (0);
}