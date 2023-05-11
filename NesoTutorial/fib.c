#include <stdio.h>

// Write a program to print Fibonacci series upto n number of terms. 

/**
 * The term Fibonacci comes from the name of an Italian Mathematician Leonardo of Pisa, known as
 * Fibonacci
 * In fib series, next term is obtained by taking sum of previous two terms
 * 
 * n        1 2 3 4 5 6
 * fib(n)   0 1 1 2 3 5
 * 
 * Mathematically, we say that fib(n) = fib(n - 1) + fib(n - 2)
*/

int main()
{
    int a, b, n, res;
    a = 0;
    b = 1; 

    printf("Enter the two numbers you want to add: ");
    scanf("%d", &n);

    for(int i = 0; i < n; i++)
    {
        printf("%d ", a);

        res = a + b;
        a = b;
        b = res;
    }

    return (0);
}