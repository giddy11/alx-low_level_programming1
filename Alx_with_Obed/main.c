#include <stdio.h>
#include "main.h"

int main()
{
    double rad = 25;
    double height = 4;

    double area = C_area(rad);
    double vol = C_vol(height,area);

    printf("The area: %0.2f\n", area);
    printf("The volume: %0.2f\n", vol);

    return (0);
}