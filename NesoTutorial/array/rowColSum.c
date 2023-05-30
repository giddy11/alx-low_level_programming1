#include <stdio.h>

/**
 * WAP that reads a 5*5 array of intergers and then prints the row sum and column sum:
 * 
 * 
*/




int main()
{
    int arr[5][5] = {{8,3,9,0,10},
                     {3,5,17,1,1},
                     {2,8,6,23,1},
                     {15,7,3,2,9},
                     {6,14,2,6,0}
                     };

    int row[5] = {0};
    int col[5] = {0};

    
    int rowSum = 0, colSum = 0;

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            // printf("%d ", arr[i][j]);
            rowSum += arr[i][j];
            colSum += arr[j][i];

            
        }
        row[i] = rowSum;
        col[i] = colSum;
        rowSum = 0;
        colSum = 0;
    }

    printf("Row total:      ");
    for (int k = 0; k < 5; k++)
    {
        printf("%d ", row[k]);
    }

    printf("\nColumn total:   ");
    for (int k = 0; k < 5; k++)
    {
        printf("%d ", col[k]);
    }


    return (0);
}