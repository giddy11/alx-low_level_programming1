#include <stdio.h>
#include <stdlib.h>

void A() { printf("Hello"); }
void B(void (*ptr)()) { ptr(); } // call back that ptr points to


int main()
{
    qsort()


    void (*ptr1)() = A;
    B(ptr1);
    
    return (0);
}