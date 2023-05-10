#include <stdio.h>

/**
 * Write a program to check whether a number is an Armstrong number or not
 * An Armstrong number of order n is a number in which each digit wen multiplied
 * by itself n number of times and finally added together, results the same number.
 * 
 * 371 is a 3 digit no. Therefore, its order is 3
 * Now here, each digit is multiplied by itself 3 times and finally added together and results in
 * our original number i.e.
 * 
 * 3*3*3 + 7*7*7 + 1*1*1 = 27 + 343 + 1 = 371
 * 
 * Steps:
 *      Find out how many digits are there in the number:
 *      Multiply each digit n times (in our example, n=3) and add them
 *      Check whether the calculated result is equal to the actual number or not
*/



int main()
{
    int count, number, rem, res, mul, cnt, q;
    count = 0;
    q = number;
    cnt = count;

    printf("Please enter a number: ");
    scanf("%d", &number);

    //get count of digits
    while(q != 0)
    {
        q /= 10;
        count++;
    }
    q = number;

    while(q != 0)
    {
        rem = q%10;
        while(cnt != 0)
        {
            mul *= rem;
            cnt--;
        }
        res += mul;
        cnt = count;
        q /= 10;
        mul = 1;
    }

    if(res == number)
        printf("This is an Armstrong Number");
    
    else
        printf("Not");

    return (0);
}