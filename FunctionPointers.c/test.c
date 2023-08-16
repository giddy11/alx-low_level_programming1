#include <stdio.h>

int sum(int x, int y)
{
    return (x+y);
}

int mystery(int a, int b, int (*fn)(int,int))
{ 
    return ((*fn)(a,b)); 
} 

int main()
{
    mystery(10,12);


    return (0);
}