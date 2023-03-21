#include <stdio.h>

/**
 * Some suggestions
 * 1- Always explicitly declare the return type of your functions
 * 2- Use void if your function doesnt return anything
 * 3- Compiler only does proper type conversions for functions when it's seen it in advance
 * 4- Always define your function befor use when possible
*/

void printHello(char* name)
{
    printf("Hello there %s\n", name);
    /* Compiler can also assume an implicit return as well.
       for redability sake, its best to explicitly declare it */
    // return;
}

int printGoodbye(char* name)
{
    printf("Goodbye there %s\n", name);
    return(1);
}

int main(void)
{
    printHello("Bob");
    int i = printGoodbye("Alice");
    printf("printGoodbye returns %d\n", i);
}