#include "dog.h"

void print_dog(struct dog *d)
{
    if (d == NULL)
        return;
    
    printf("Name: %s\n", (d->name != NULL) ? d->name : "(nil)");
    printf("Age: %f\n", (d->age >= 0) ? d->age : -1);
    printf("Owner: %s\n", (d->owner != NULL) ? d->owner : "(nil)");
}



int main(void)
{
    struct dog my_dog;

    my_dog.name = "Poppy";
    my_dog.age = 3.5;
    // my_dog.owner;
    print_dog(&my_dog);
    return (0);
}