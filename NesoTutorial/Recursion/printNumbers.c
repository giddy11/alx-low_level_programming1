#include <stdio.h>

/**
 * WAP that print numbers from 1 - 10 in such a way that when number is odd, add 1 and
 * when number is even, subtract 1.
 * 
 * 1 2 3 4 5 6 7 8 9 10
 * 2 1 4 3 6 5 8 7 10 9
*/

void odd();
void even();
int num = 1;


int main()
{
    odd();

    return (0);
}

void odd()
{
    if (num <= 10)
    {
        printf("%d ", num + 1);
        num++;
        even();
    }
    return;
}

void even()
{
    if (num <= 10)
    {
        printf("%d ", num - 1);
        num++;
        odd();
    }
    return;
}