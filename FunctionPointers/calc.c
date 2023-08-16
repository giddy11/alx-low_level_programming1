#include <stdio.h>
# define opa 4

float sum(float a, float b) {return (a+b); }
float mul(float a, float b) {return (a*b); }
float sub(float a, float b) {return (a-b); }
float div(float a, float b) {return (a/b); }

int main()
{
    float (*ptr2func[opa])(float, float) = {sub, sum, mul, div};
    int choice;
    float a, b;

    printf("Enter your choice: 0 for sum, 1 for sub, 2 for mul, 3 for div\n");
    scanf("%d", &choice);

    printf("Please enter the two numbers:\n");
    scanf("%f %f", &a, &b);

    float res = ptr2func[choice] (a,b);

    printf("Result is %f\n", res);


    return (0);
}