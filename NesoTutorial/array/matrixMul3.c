#include <stdio.h>

/**
 * In order to multiply two matrices, #columns of 1st matrix = #rows of 2nd matrix
 * Also the size of the resultant matrix depends on the #rows of 1st matrix and #columns of 2nd matrix
*/

int main()
{
    int arr1 [3][3] = {{1,2,3},
                       {1,2,1},
                       {3,1,2}
                      };

    int arr2 [3][3] = {{1,2,3},
                       {1,2,1},
                       {3,1,2}
                      };

    int res [3][3] = {0};

    int sum = 0;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            int mul = arr1[i][j] * arr2[i][j];
        }
    }
    

    return (0);
}