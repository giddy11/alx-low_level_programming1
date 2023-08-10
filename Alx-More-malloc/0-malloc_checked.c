#include <stdio.h>
#include <stdlib.h>

void *malloc_checked(unsigned int b)
{
    void *ptr;

    ptr = malloc(b);
    if (ptr == NULL)
        exit(98);

    return ptr;
}


int main()
{
    char *c;
    int *i;
    float *f;
    double *d;

    // c = malloc_checked(1024 * sizeof(char));
    // printf("c: %p\n", (void *)c);

    // i = malloc_checked(402 * sizeof(int));
    // printf("i: %p\n", (void *)i);

    f = malloc_checked(1000000000 * sizeof(float));
    printf("f: %p\n", (void *)f);

    // d = malloc_checked(__INT_MAX__);
    // printf("d: %p\n", (void *)d);

    free(c);
    free(i);
    free(f);
    free(d);

    return (0);
}