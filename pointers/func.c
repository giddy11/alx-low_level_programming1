#include <stdio.h>

void modify_my_param(int *m);


int main()
{
    int n;
    
    n = 98;

    modify_my_param(&n);
    printf("n : %d", n);

    return (0);
}


void modify_my_param(int *m)
{
    *m = 402;
}
