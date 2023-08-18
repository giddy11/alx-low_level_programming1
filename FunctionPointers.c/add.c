#include <stdio.h>

int Add(int a, int b) {return a + b; }
void PrintHello(char *name)
{ 
    printf("Hello %s\n", name); 
}

int print_char(va_list c)
{

}

int main()
{
    void (*ptr)(char*) = PrintHello;
    ptr("Gideon");

    int (*handler_func)(va_list arg) = print_char;


    /*int (*func)(int, int) = Add;
    int res = func(2,3);

    printf("Result is: %d\n", res);*/

    return (0);
}