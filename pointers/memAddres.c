#include <stdio.h>

int main()
{
    char c;
    int n;
    int *ptr;

    n = 98;
    ptr = &n;
    *ptr = 4;

    printf("Address of variable 'c' : %p\n", &c);
    printf("Address of variable 'n' : %p\n", &n);
    printf("Address of variable 'ptr' : %p\n", &ptr);

    printf("Address of variable 'n' : %p\n", &n);
    printf("Address of variable 'ptr' : %p\n", ptr);

    printf("value of 'n' : %d\n", n);


    return (0);
}