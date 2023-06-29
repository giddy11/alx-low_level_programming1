#include <stdio.h>
#include "main.h"


// const double PI = 3.142;

double C_vol(double h, double a)
{
    double area = C_area(a);
    return area * h;
}