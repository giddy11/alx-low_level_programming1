#include <stdio.h>

int main()
{
    int x = 5;
    int *p;
    int **q;
    int ***r;

    p = &x;
    q = &p;
    r = &q;

    // int s = &r;

        printf("%p\n", *p);


//    printf("Address = %d, value = %d\n", p, *p);
//    printf("Address = %d, value = %d\n", q, *q);
//    printf("Address = %d, value = %d\n", r, *r);

//    **q = *p + 1;
//    printf("Address = %d, value = %d\n", q, **q);


    
    return (0);
}