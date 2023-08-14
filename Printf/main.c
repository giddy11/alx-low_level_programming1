#include <stdio.h>
#include "main.h"

int main()
{
    int r_value, r_value2;
    char *c = "Gideon";
    char c1 = 'a';


    /*for %c*/
    // r_value2 = my_printf("Hello sir %c\n", c1);

    /*for %d*/
    // r_value2 = my_printf("\n\nHello world\n\n\n\n");
    // printf("r_value2 is %d", r_value2);
    // my_printf("Hello sir %d", r_value2);

    // /*for %%*/
    // my_printf("Hello %% sir");
    // printf("Hello %% sir");

     /*for %s*/
    my_printf("Hello %s sir");
    // printf("Hello %s sir", "hell");


    // r_value = printf("\n\nHello world\n");
    // printf("r_value is %d", r_value);

    return (0);
}