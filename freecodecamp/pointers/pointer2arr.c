#include <stdio.h>
#include <stdlib.h>


int SumOfElements(int A[], int size)
{
    int i, sum;
    sum = 0;
    for (i = 0; i < size; i++)
    {
        sum += A[i];
    }
    return sum;
    
}

int DoubleEachNumber(int A[], int size)
{
    int i = 0;

    for (i = 0; i < size; i++)
    {
        A[i] *= 2;
    }
    return *A;
    
}

void print()
{
    printf("Hello World\n");
}

int *Add (int *a, int *b)
{
    int *c = (int*) malloc (sizeof(int));
    *c = (*a) + (*b);
    return c;
}

int main()
{
    int a,b;
    a=4;
    b=2;
    int *c = Add(&a,&b);
    // print();

    printf("c = %d", c);


    /*int B[3][2][2] = {
                        {
                            {2,5},
                            {7,9}
                        },
                        {
                            {3,4},
                            {6,1}
                        },
                        {
                            {0,8},
                            {11,13}
                        }
                     };

    int (*ptb)[2][2] = B;

    printf("B = %d\n", B);
    printf("B = %d\n", B[0]);
    printf("B = %d\n", *B);
    printf("B = %d", ptb);
*/

    /*int A[] = {1,2,3,4,5};
    int size = sizeof(A)/sizeof(A[0]);
    // int total = SumOfElements(A, size);
    int res = DoubleEachNumber(A, size);

    for (int i = 0; i < size; i++)
    {
        printf("%d", A[i]);

        if (i < size - 1)
        {
            printf(",");
        }
    }

    // printf("sum = %d", total);*/




    // int A[] = {2,4,5,8,1};

    // for (int i = 0; i < 5; i++)
    // {
    //     printf("address for  A[%d] = %d\n",i, &A[i]);
    //     printf("value for  A[%d] = %d\n",i, A[i]);
    // }

    return (0);
}