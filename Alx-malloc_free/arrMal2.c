#include <stdio.h>
#include <stdlib.h>


 
int main()
{
    int a = 8;
    int* ptr;

    ptr = malloc(4);
    *ptr = 9;
    a = *ptr;

    printf("%d\n", a);


    return (0);
}

/*#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a = 8;
    int* ptr;

    ptr = (int*)malloc(sizeof(int)); // Allocate memory for an int

    if (ptr == NULL) {
        fprintf(stderr, "Memory allocation failed\n");
        return 1;
    }

    *ptr = 9; // Store the value 9 in the memory pointed to by ptr
    a = *ptr; // Assign the value stored in ptr to the variable a

    printf("%d\n", a);

    free(ptr); // Free the allocated memory

    return 0;
}
*/