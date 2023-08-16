#include <stdio.h>

int sum(int x, int y)
{
    return (x+y);
}

void print_elem(int elem)
{
    printf("%d\n", elem);
}

void print_name_as_is(char *name)
{
    printf("Hello, my name is %s\n", name);
}

void array_iterator(int *array, size_t size, void (*action)(int))
{
        unsigned i;

        for(i = 0; i < size; i++)
        {
            action(array[i]);
        }
}

int main()
{
    // void (*action)(int) = print_elem;
    // action(5);

    int array[5] = {0, 98, 402, 1024, 4096};
    array_iterator(array, 5, print_elem);


    // void (*f)(char *) = print_name_as_is;
    // f("Gideon");


    return (0);
}