#include <stdio.h>

/**
 * Leap Year
 * 
 * This is a year having 366 days.
 * The extra day is the 29th feb
 * It arrives after every 4 years
 * 
 * Every year that is exactly divisible by 4 is a leap year,
 * except the centurial year that is exactly divisible by 100.
 * 
 * But this centurial years are leap years if they are exactly divisible by 400
 * 
 *  HOW TO CHECK FOR LEAP YEAR OR NOT
 * >>If a year is divisible by 400, then it is a leap year
 * >>If a year is not divisible by 400, but is divisible by 100, then it isnt a leap year
 * >>If a year is not divisible by both 400 and 100, but divisible by 4, then it is a leap year
 * 
*/


int main()
{
    int year;
    printf("Enter year: ");
    scanf("%d", &year);

    if(year % 400 == 0 || (year % 400 != 0 && year % 100 != 0 && year % 4 == 0))
    {
        printf("This is a leap year\n");
    }
    else
        printf("This is not a leap year");
    
    return (0);
}