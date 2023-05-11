#include <stdio.h>

/**
 * A number or a word or a phase if read backwards gives the
 * same number or a word or a phase as it is being read forward
 * 
 * 1221, racecar, 24542 etc.
 * 
 * idea: Make last number the first number, 2nd last number the second number and so on
 * That means you need to reverse the number and if the reversed number
 * is equal to the actual number, then we can say that the number is palindrome.
 * 
 * What happens when we divide the number by 10
 * the remainder always is the last number in the digits
 * 456/10; Remainder = 6, Quotient = 45
 * 
 * number = 2332, result = 0, q = number
 * remainder = q%10
 * result = result*10 + remainder
 * q = q/10
 * 
 * tests = 12345654321, 023320
*/

int main()
{

    int number = 1001, q = number, rem;
    int result = 0;

    while(q != 0)
    {
        rem = q%10;
        result = result * 10 + rem;
        q /= 10;
    }

    if(result == number)
        printf("This is a palindrom");
    
    else
        printf("This is not a palindrom");

    return (0);
}