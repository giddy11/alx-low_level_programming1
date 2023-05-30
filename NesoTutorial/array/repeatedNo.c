#include <stdio.h>
#define N 5


int main()
{
    int seen[N] = {0};
    int input, rem;

    printf("Enter integer number: ");
    scanf("%d", &input);

    while(input > 0)
    {
        rem = input % 10;
        if (seen[rem] == 1)
        {
            break;
        }
        seen[rem] = 1;
        input /= 10;
    }

    if (input > 0)
        printf("Yes");

    else
        printf("No");

    return (0);
}