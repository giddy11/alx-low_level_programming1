#include <stdio.h>


int main()
{
    FILE *pf = fopen("test.txt", "w");
    char *txt = "I am printed as read-only.";

    // fprintf(pf, "I am on the next line after appending");
    fprintf(pf, "%s", txt);

    printf(3);
    

    FILE *file_pointer;
    file_pointer = fopen("example.txt", "r"); 
    
    fprintf(file_pointer, "Hello, World!\n");


    // if(remove("test.txt") == 0)
    //     printf("File deleted successfully");
    // else
    //     printf("File does not exist anymore");

    return (0);
}