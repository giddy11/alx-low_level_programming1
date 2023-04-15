#include <stdio.h>

int main()
{
    int a = 5;
    int b = 20;
    int* ptr = &a;

    printf("value of ptr: %d\n", ptr);
    printf("value of ptr: %d\n\n", *ptr);
    
    *ptr = 6;   
    printf("value of ptr: %d\n", ptr);
    printf("value of ptr: %d\n", ptr);
    printf("value of ptr at address ptr+1: %d\n", ptr+1);
    printf("value of ptr at address ptr+1: %d\n\n", *(ptr+1));

    *ptr = b;
    printf("value of ptr: %d\n", ptr);
    printf("value of ptr: %d\n", *ptr);



    return (0);
}