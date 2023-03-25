#include <stdio.h>


int main(void)
{
        int i;

        for (i = 0; i < 100; i++)
        {
                if (i % 2 != 0)
                {
                        continue;
                        printf("i is not even so don't print\n");
                }
                else
                {
                        break;
                         printf("i is even, break to print\n");
                }

                printf("Outside of if/else, still inside for loop\n");

                printf("%d\n", i);
        }

        printf("For loop exited\n");

        return(0);
}