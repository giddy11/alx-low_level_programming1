#include <stdio.h>

void Increment(int *a)
{
    *a += 1;
    printf("Address of variable a in increment function = %d\n", &a);
    printf("value of variable a in increment function = %d\n", *a);

}

// int Increment(int a, int b)
// {
//     return a += b;
// }


int main()
{

    int a,b;
    a = 10;
    b = 2;

    // Increment(&a);
    // int c = Increment(a,b);
    // int c =   Increment(a);
    printf("Address of variable a in main function = %d\n", &a);
    printf("value of variable a in main function = %d\n", a);

    Increment(&a);
    printf("Address of variable a in main function = %d\n", &a);

    printf("a = %d", a);

    return (0);
}