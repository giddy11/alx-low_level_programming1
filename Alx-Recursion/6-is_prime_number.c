#include <stdio.h>

double custom_abs(double value)
{
    if (value < 0)
        return -value;
    return value;
}

// Newton - Raphson Method
double square_root_recursive(double number, double guess, double precision)
{
    double new_guess = (guess + number / guess) / 2;
    double difference = custom_abs(new_guess * new_guess - number);

    if (difference <= precision)
        return new_guess;
    else
        return square_root_recursive(number, new_guess, precision);
}

double square_root(double number)
{
    double precision = 0.00001;
    double guess = number / 2;

    return square_root_recursive(number, guess, precision);
}

int check_Prime(int a, int b)
{
    int count = 0;
    int sqrtNum;
    if (count == 0)
    {
        sqrtNum = square_root(a);
        count++;
    }

    if (b <= sqrtNum)
    {
        if (a % b == 0)
        {
            count = 0;
            return 0;
        }
    }
    else if (b > sqrtNum)
    {
        count = 0;
        return 1;
    }

    return check_Prime(a, b + 1);
}

int is_prime_number(int n)
{
    if (n <= 1)
        return 0;

    else if (n == 2 || n == 3)
        return 1;
    
    return check_Prime(n, 2);
    
}


int main(void)
{
    int r;

    r = is_prime_number(1);
    printf("%d\n", r);
    r = is_prime_number(1024);
    printf("%d\n", r);
    r = is_prime_number(16);
    printf("%d\n", r);
    r = is_prime_number(17);
    printf("%d\n", r);
    r = is_prime_number(25);
    printf("%d\n", r);
    r = is_prime_number(-1);
    printf("%d\n", r);
    r = is_prime_number(113);
    printf("%d\n", r);
    r = is_prime_number(7919);
    printf("%d\n", r);
    return (0);
}