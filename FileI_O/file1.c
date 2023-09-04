#include <stdio.h>


int main()
{
    FILE *pf = fopen("test22.txt", "r");

    char buff[500];

    if (pf == NULL)
        printf("File doesnt exist");

    while(fgets(buff, 500, pf) != NULL)
        printf("%s", buff);

    fclose(pf);

    

    return (0);
}