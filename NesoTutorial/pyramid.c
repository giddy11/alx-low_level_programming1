#include <stdio.h>

/**
 * 3 rows == 5 columns
 * 4 rows == 7 columns
 * 5 rows == 9 columns
 * 6 rows == 11 columns
 * 
 * so if n is no. of rows, then 2n -1 will be no. of columns
*/

int main()
{
    int n;
    printf("How many rows you want in your pyramid?\n");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= 2 * n - 1; j++)
        {
            if(j >= n-(i-1) && j <= n+(i-1))
                printf("*");
            
            else
                printf(" ");
        }
        printf("\n");
    }


    return (0);
}