#include <stdio.h>
#include <stdlib.h>

char *Create(char *c)
{
    char *ptr;
    int i;
    

    ptr = malloc(18);

    for(i = 0; c[i] != 0; i++)
    {
        ptr[i * 2] = c[i]; //i * 2 >>>>>>
        ptr[i * 2 + 1] = '\n';  //i * 2 + 1
    }
    ptr[i*2] = 0;

    return ptr;

}

int main()
{
   char *arr = "alx is cool";

   char *ptr = Create(arr);




    
    // ptr[i] = 0;


    printf("%s", ptr);



    return (0);
}

/**
 * a'\n'b'\n'
*/