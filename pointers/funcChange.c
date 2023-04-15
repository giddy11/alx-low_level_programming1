#include <stdio.h>

void modify_my_param(int *m);


int main()
{
    int n;
    int *p;
    
    p = &n;
    n = 98;

    printf("Value of 'n' before the call: %d\n", n);
    printf("Address of 'n': %p\n", &n);
    printf("Value of 'p': %p\n", p);
    printf("Address of 'p': %p\n", &p);


    modify_my_param(p);
    printf("Value of 'n' after the call: %d\n", n);
    return (0);
}


void modify_my_param(int *m)
{
    printf("Value of m : %d\n", m);
    printf("Address of m : %p\n\n", &m);

    *m = 402;
}