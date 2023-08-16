#include <stdio.h>

int sum(int a , int b)
{
    return a + b;
}

int Average(int sum)
{
    return sum / 2;
}

int Average2(int (*ptF)(int, int), int a, int b)
{
    int n = ptF(a,b);
    return n / 2;
}



int main()
{
    int (*ptsum)(int, int) = sum;
    int result_avg = Average2(ptsum, 2, 4);

    printf("Result = %d\n", result_avg);


    return (0);
}