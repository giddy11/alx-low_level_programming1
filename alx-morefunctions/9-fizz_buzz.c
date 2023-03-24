#include <stdio.h>





int main()
{
    int i;

    for (i = 1; i <= 100; i++)
    {
        if ((i % 3 == 0) && (i % 5 == 0))
        {
            printf("FizzBuzz ");
            continue;
        }
        else if(i % 3 == 0)
        {
            printf("Fizz ");
            continue;
        }
        else if (i % 5 == 0)
        {
            printf("Buzz ");
            continue;
        }
        else
        {
            printf("%d ", i);
        }
    }
    printf("\n");
    
}