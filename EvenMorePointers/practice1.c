#include <stdio.h>


int main()
{
    int arr[3];
    int (*ptr)[3] = &arr;

    printf("%d\n", sizeof(arr));
    printf("%d\n", sizeof(ptr));


    return (0);
}