#include "dog.h"

void free_dog(dog_t *d)
{
    if(d == NULL)
        return;

    // free(d->owner);
    // free(d->name);
    // free(d);
}

int main(void)
{
    dog_t *my_dog;

    my_dog = new_dog("Poppy", 3.5, "Bob");
    printf("My name is %s, and I am %.1f :) - Woof!\n", my_dog->name, my_dog->age);
    free_dog(my_dog);
    return (0);
}