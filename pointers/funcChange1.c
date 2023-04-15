#include <stdio.h>

void modify_my_char_var(char *cc, char ccc)
{
    *cc = 'o';
    ccc = 'l';
}


int main()
{
    char c;
    char *p;

    p = &c;
    printf("The value of c: %d\n", c);
    printf("The value of p: %d\n", c);
    printf("The address of c: %p\n", c);
    printf("The address of c: %p\n\n", c);

    c = 'H';
    printf("The value of c: %d\n", c);
    printf("The value of p: %d\n", c);
    printf("The address of c: %p\n", c);
    printf("The address of c: %p\n\n", c);

    modify_my_char_var(p,c);
    printf("The value of c: %d\n", c);
    printf("The value of p: %d\n", c);
    printf("The address of c: %p\n", c);
    printf("The address of c: %p\n\n", c);
    
    return (0);
}


// void modify_my_char_var(char **c, char ccc)
// {
//     *cc = 'o';
//     ccc = 'l';
// }