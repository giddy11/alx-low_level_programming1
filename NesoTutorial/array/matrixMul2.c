#include <stdio.h>
#define MAX 50

int main()
{
    int rowA, colA, rowB, colB;
    int sum = 0;

    printf("Enter the rows and columns of matrix a: ");
    scanf("%d %d", &rowA, &colA);

    int arr1[MAX][MAX];


    printf("Enter the elements of matrix a:\n");
    for (int i = 0; i < rowA; i++)
    {
        for (int j = 0; j < colA; j++)
        {
            scanf("%d", &arr1[i][j]);
        }
    }

    printf("\n\nEnter the rows and columns of matrix b: ");
    scanf("%d %d", &rowB, &colB);

    int arr2[MAX][MAX];

    if (rowB != colA)
    {
        printf("sorry! we cannot perform matrix multiplication on matrix a and b");
        return (0);
    }
    else
    {
        printf("Enter the elements of matrix b:\n");
        for (int i = 0; i < rowA; i++)
        {
            for (int j = 0; j < colA; j++)
            {
                scanf("%d", &arr2[i][j]);
            }
        }
    }
    
    int res[MAX][MAX];

    for (int i = 0; i < rowA; i++)
    {
        for (int j = 0; j < colA; j++)
        {
            for (int k = 0; k < 3; k++)
            {
                sum += arr1[i][k] * arr2[k][j];
            }
            res[i][j] = sum;
            sum = 0;
        }
    }

    printf("\nResultant matrix\n");
    for (int i = 0; i < rowA; i++)
    {
        for (int j = 0; j < colA; j++)
        {
            printf("%d ", res[i][j]);
        }
        printf("\n");
    }

    return (0);
}